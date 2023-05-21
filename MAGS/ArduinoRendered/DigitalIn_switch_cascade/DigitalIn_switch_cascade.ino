


boolean lastButton = LOW;
boolean ledOn = false;

void setup (){


    
    
        
        
        pinMode(10, OUTPUT);
        
        
        
        pinMode(9, OUTPUT);
        
        
        
        pinMode(11, OUTPUT);
        
        
        
        pinMode(8, OUTPUT);
        
        
        
        


    
        
        pinMode(7, INPUT);
    
    


}

void loop (){
  

  if (digitalRead(7) == HIGH && lastButton == LOW){
    ledOn = !ledOn;
    lastButton = HIGH;
  }
  else{
    lastButton = digitalRead(7);
  }

  if(ledOn){
  
  
  
    digitalWrite([10, 9, 11, 8], HIGH);
    delay(100);
  
    digitalWrite([10, 9, 11, 8], HIGH);
    delay(50);
  
    digitalWrite([10, 9, 11, 8], HIGH);
    delay(200);
  
  
  
    digitalWrite([10, 9, 11, 8], LOW);
    delay(100);
  
    digitalWrite([10, 9, 11, 8], LOW);
    delay(50);
  
    digitalWrite([10, 9, 11, 8], LOW);
    delay(200);
  

  
  }else{
    
  
    digitalWrite(10, false);
  
    digitalWrite(9, false);
  
    digitalWrite(11, false);
  
    digitalWrite(8, false);
  

  }

}