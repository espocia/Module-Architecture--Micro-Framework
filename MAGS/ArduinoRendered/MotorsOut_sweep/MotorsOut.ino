
#include <Servo.h>




// makes servo object (check if servo object is itrable  or not)

  
    Servo myservo[2];  
  


int pos = 0;    // variable to store the servo position

void setup() {
  
  
// attach servo pins ( check if iterable or not)

  
     
      myservo[0].attach(11);
     
      myservo[1].attach(12);
    
  

  
}

void loop() {
  
  // sweep looping (check if servo pin is iterables)

  for (pos = 0; pos <= 360; pos += 1) { // goes from 0 degrees to 180 degrees
  
  
    
      myservo[0].write(pos);              
    
      myservo[1].write(pos);              
    
      delay(15);                      
  
    
  }
  
  for (pos = 360; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
  
  
    
      myservo[1].write(pos);              
    
      myservo[2].write(pos);              
    
      delay(15);                      
  
  }

}