int pir = 4;
int led = 8;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(pir,INPUT);

}

void loop() {
  
  for(int  i =0;i<250;i++)
    digitalWrite(pir,LOW);
  
  int reading = digitalRead(pir);

  delay(500);
  if(reading ==1)
    {
      Serial.println("Movement Detected"+String(reading));
      digitalWrite(led,HIGH);
      
    }
  else
    {
      Serial.println("No Movement"+String(reading));
      digitalWrite(led,LOW);  
    }
    delay(500);

}
