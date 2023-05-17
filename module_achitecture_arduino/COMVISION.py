from cvzone.HandTrackingModule import HandDetector
from cvzone.SerialModule import SerialObject
import cv2
import numpy as np


def HandTrack():
    cap = cv2.VideoCapture(0)
    detector = HandDetector(detectionCon=0.8, maxHands=2)
    arduino = SerialObject("/dev/ttyACM0")
    Servo_arduino = SerialObject("/dev/ttyACM0")

    while True:
        # Get image frame
        success, img = cap.read()

        # Find the hand and its landmarks
        hands, img = detector.findHands(img)

        if hands:
            # Hand 1
            hand1 = hands[0]
            lmList1 = hand1["lmList"]  # List of 21 Landmark points
            bbox1 = hand1["bbox"]  # Bounding box info x,y,w,h
            centerPoint1 = hand1['center']  # center of the hand cx,cy
            handType1 = hand1["type"]  # Handtype Left or Right

            fingers1 = detector.fingersUp(hand1)

            if len(hands) == 2:
                # Hand 2
                hand2 = hands[1]
                lmList2 = hand2["lmList"]  # List of 21 Landmark points
                bbox2 = hand2["bbox"]  # Bounding box info x,y,w,h
                centerPoint2 = hand2['center']  # center of the hand cx,cy
                handType2 = hand2["type"]  # Hand Type "Left" or "Right"

                fingers2 = detector.fingersUp(hand2)

                # Find Distance between two Landmarks. Could be same hand or different hands
                p1, p2 = lmList1[8], lmList2[8]
                x1, y1 = p1[1], p1[2]
                x2, y2 = p2[1], p2[2]

                length = ((x2 - x1)**2 + (y2 - y1)**2)**0.5
                dist = abs(x1 - x2)

                # Draw line and circle
                cv2.line(img, (x1, y1), (x2, y2), (255, 0, 255), 3)
                cv2.circle(img, (x1, y1), 15, (255, 0, 255), cv2.FILLED)
                cv2.circle(img, (x2, y2), 15, (255, 0, 255), cv2.FILLED)

                # Display distance
                cv2.putText(img, f"Length: {int(length)}", (400, 50),
                            cv2.FONT_HERSHEY_SIMPLEX, 1, (255, 0, 255), 3)
                cv2.putText(img, f"Horizontal : {int(dist)} ",
                            (50, 50), cv2.FONT_HERSHEY_PLAIN, 1, (255, 0, 0), 2)

                servoAngle = int(np.interp(length, [50, 300], [0, 180]))
                if length >= 100:
                    Servo_arduino.sendData([servoAngle])
                    print(f"servo: {servoAngle} width: {dist}")
                elif length >= 150:
                    arduino.sendData([1])
                else:
                    arduino.sendData([0])

        # Display
        cv2.imshow("Image", img)
        cv2.waitKey(1)

    cap.release()
    cv2.destroyAllWindows()
