





  
  
    int buttonState = 0;       // Variable to store the button state
  



void setup() {


    
        
        pinMode(7, INPUT);
    
    


    
    
        
        
        pinMode(10, OUTPUT);
        
        
        
        

  
}

void loop() {
  
  

  
    buttonState = digitalRead(7);   // Read the state of the button
  


  if (buttonState == HIGH) {
  
  

    
        
        
  
    digitalWrite(10, HIGH);
    delay(0);
    digitalWrite(10, LOW);
    delay(0);
  

        
    
    
    

    
  } else {
    
  
    
    
  
    digitalWrite(10, false);
  

    
  
    
  }
  
  
}