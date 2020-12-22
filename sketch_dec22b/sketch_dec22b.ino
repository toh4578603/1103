void setup() {
  for (int i=2;i<=9;i++)
    pinMode(i,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=2;i<=9;i++)
    {
      digitalWrite(i,0);
      delay(1000);
      digitalWrite(i,1);
      delay(1000);
    }
}
