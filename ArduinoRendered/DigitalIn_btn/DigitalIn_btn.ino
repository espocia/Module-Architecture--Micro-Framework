





  
  
    int buttonState = 0;       // Variable to store the button state
  



void setup() {


    
        
        pinMode(2, INPUT);
    
    


    
    
        
        
        pinMode(11, OUTPUT);
        
        
        
        pinMode(10, OUTPUT);
        
        
        
        pinMode(9, OUTPUT);
        
        
        
        pinMode(8, OUTPUT);
        
        
        
        

  
}

void loop() {


  
    buttonState = digitalRead(2);   // Read the state of the button
  


  if (buttonState == HIGH) {
  
  
    
  
  
    digitalWrite(11, true);
  
    digitalWrite(10, true);
  
    digitalWrite(9, true);
  
    digitalWrite(8, true);
  
  
  
  
 
  
    
  } else {
    
  
    
  
    digitalWrite(11, false);
  
    digitalWrite(10, false);
  
    digitalWrite(9, false);
  
    digitalWrite(8, false);
  

  
    
  }
}