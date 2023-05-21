




  
  
    int buttonState = 0;       // Variable to store the button state
  



void setup() {


    
        
        pinMode(7, INPUT);
    
    


    
    
        
        
        pinMode(10, OUTPUT);
        
        
        
        pinMode(9, OUTPUT);
        
        
        
        pinMode(11, OUTPUT);
        
        
        
        pinMode(8, OUTPUT);
        
        
        
        

  
}

void loop() {
  
  

  
    buttonState = digitalRead(7);   // Read the state of the button
  


  if (buttonState == HIGH) {
    
    
  
  
    
    
  
  
    

      digitalWrite(10, HIGH);
      delay(100);

    

      digitalWrite(10, HIGH);
      delay(50);

    

      digitalWrite(10, HIGH);
      delay(200);

    
  
    

      digitalWrite(9, HIGH);
      delay(100);

    

      digitalWrite(9, HIGH);
      delay(50);

    

      digitalWrite(9, HIGH);
      delay(200);

    
  
    

      digitalWrite(11, HIGH);
      delay(100);

    

      digitalWrite(11, HIGH);
      delay(50);

    

      digitalWrite(11, HIGH);
      delay(200);

    
  
    

      digitalWrite(8, HIGH);
      delay(100);

    

      digitalWrite(8, HIGH);
      delay(50);

    

      digitalWrite(8, HIGH);
      delay(200);

    
  
  
  
    

      digitalWrite(10, LOW);
      delay(100);

    

      digitalWrite(10, LOW);
      delay(50);

    

      digitalWrite(10, LOW);
      delay(200);

    
  
    

      digitalWrite(9, LOW);
      delay(100);

    

      digitalWrite(9, LOW);
      delay(50);

    

      digitalWrite(9, LOW);
      delay(200);

    
  
    

      digitalWrite(11, LOW);
      delay(100);

    

      digitalWrite(11, LOW);
      delay(50);

    

      digitalWrite(11, LOW);
      delay(200);

    
  
    

      digitalWrite(8, LOW);
      delay(100);

    

      digitalWrite(8, LOW);
      delay(50);

    

      digitalWrite(8, LOW);
      delay(200);

    
  


    
  



    
  } else {
    
  
    
  
    digitalWrite(10, false);
  
    digitalWrite(9, false);
  
    digitalWrite(11, false);
  
    digitalWrite(8, false);
  

  
    
  }
  
  
}