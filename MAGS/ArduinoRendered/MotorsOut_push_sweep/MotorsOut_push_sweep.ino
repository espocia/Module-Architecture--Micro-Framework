

#include <Servo.h>

// makes servo object (check if servo object is itrable  or not)

  
    Servo myservo[2];  
  


bool buttonPressed = false;   // flag to track button state
int pos = 0;

void setup() {

// attach servo pins ( check if iterable or not)

  
     
      myservo[0].attach(9);
     
      myservo[1].attach(8);
    
  



  pinMode(2, INPUT_PULLUP);  // configure the button pin as input with internal pull-up resistor

  
}

void loop() {
  

  // clockwise button toggle servo sweep

  // Check if the button is pressed
  if (digitalRead(2) == LOW) {
    // Button is pressed, move the servo
    buttonPressed = true;
    for(int i = 0; i < 2; i++){
    myservo[i].write(90);   // Set servo to a desired position (e.g., 90 degrees)
    }
  }
  
  // Check if the button is released
  if (digitalRead(2) == HIGH && buttonPressed) {
    // Button is released, stop the servo
    buttonPressed = false;
    for(int i = 0; i < 2; i++){
    myservo[i].write(0);   // Set servo to a desired position (e.g., 90 degrees)
    }
  }


}