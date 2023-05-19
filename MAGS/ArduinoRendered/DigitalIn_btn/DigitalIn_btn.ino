





  
  
    int buttonState = 0;       // Variable to store the button state
  



void setup() {


    
        
        pinMode(2, INPUT);
    
    


    
    
        
        
        pinMode(12, OUTPUT);
        
        
        
        pinMode(13, OUTPUT);
        
        
        
        

  
}

void loop() {


  
    buttonState = digitalRead(2);   // Read the state of the button
  


  if (buttonState == HIGH) {
  
  
    
  
  
    digitalWrite(12, true);
  
    digitalWrite(13, true);
  
  
  
  
 
  
    
  } else {
    
  
    
  
    digitalWrite(12, false);
  
    digitalWrite(13, false);
  

  
    
  }
}