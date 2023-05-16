





  
  
    int buttonState = 0;       // Variable to store the button state
  



void setup() {


    
        
        pinMode(2, INPUT);
    
    


    
    
        
        
        pinMode(8, OUTPUT);
        
        
        
        pinMode(9, OUTPUT);
        
        
        
        pinMode(10, OUTPUT);
        
        
        
        pinMode(11, OUTPUT);
        
        
        
        

  
}

void loop() {


  
    buttonState = digitalRead(2);   // Read the state of the button
  


  if (buttonState == HIGH) {
  
  
    
  
    
    
      
        
        digitalWrite(8, true);
        delay(50);
      
      
        
        digitalWrite(8, true);
        delay(100);
      
      
        
        digitalWrite(8, true);
        delay(200);
      
      
    
      
        
        digitalWrite(9, true);
        delay(50);
      
      
        
        digitalWrite(9, true);
        delay(100);
      
      
        
        digitalWrite(9, true);
        delay(200);
      
      
    
      
        
        digitalWrite(10, true);
        delay(50);
      
      
        
        digitalWrite(10, true);
        delay(100);
      
      
        
        digitalWrite(10, true);
        delay(200);
      
      
    
      
        
        digitalWrite(11, true);
        delay(50);
      
      
        
        digitalWrite(11, true);
        delay(100);
      
      
        
        digitalWrite(11, true);
        delay(200);
      
      
    
    
    
      
        
        digitalWrite(8, false);
        delay(50);
      
      
        
        digitalWrite(8, false);
        delay(100);
      
      
        
        digitalWrite(8, false);
        delay(200);
      
      
    
      
        
        digitalWrite(9, false);
        delay(50);
      
      
        
        digitalWrite(9, false);
        delay(100);
      
      
        
        digitalWrite(9, false);
        delay(200);
      
      
    
      
        
        digitalWrite(10, false);
        delay(50);
      
      
        
        digitalWrite(10, false);
        delay(100);
      
      
        
        digitalWrite(10, false);
        delay(200);
      
      
    
      
        
        digitalWrite(11, false);
        delay(50);
      
      
        
        digitalWrite(11, false);
        delay(100);
      
      
        
        digitalWrite(11, false);
        delay(200);
      
      
    
    
  
  
 
  
    
  } else {
    
  
    
  
    digitalWrite(8, false);
  
    digitalWrite(9, false);
  
    digitalWrite(10, false);
  
    digitalWrite(11, false);
  

  
    
  }
}