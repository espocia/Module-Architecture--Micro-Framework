





  
  
    int buttonState = 0;       // Variable to store the button state
  



void setup() {


    
        
        pinMode(2, INPUT);
    
    


    
        
        pinMode(8, OUTPUT);
    
    

  
}

void loop() {


  
    buttonState = digitalRead(2);   // Read the state of the button
  


  if (buttonState == HIGH) {
  
  
    digitalWrite(8, HIGH);    // Turn on the LED if the button is pressed
  
    
  } else {
    
  
    digitalWrite(8, LOW);
  
    
  }
}