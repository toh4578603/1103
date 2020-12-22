int buzzerPin=9;
void setup() {
 
  pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(buzzerPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH); 
  digitalWrite(4, HIGH); 

  delay(300);                  
  digitalWrite(3, LOW); 
  digitalWrite(5, LOW);  
   alarmClockBeep(buzzerPin); 
  delay(300);                                 
  digitalWrite(3, HIGH);   
  digitalWrite(5, HIGH);  
     
  delay(300);      
  digitalWrite(2, LOW);  
  digitalWrite(4, LOW);        
   alarmClockBeep(buzzerPin);            
    delay(300); 
}
  void alarmClockBeep(int pin) {
  tone(pin, 1000, 100);
  delay(100);
  }
