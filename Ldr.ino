int ldr = A1;
int led = 8;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  

}

void loop() {
  
  int reading = analogRead(pir);
  Serial.println(reading);
 
  if(reading <400)
    {
      Serial.println("Dark"+String(reading));
      digitalWrite(led,HIGH);
      
    }
  else
    {
      Serial.println("Bright"+String(reading));
      digitalWrite(led,LOW);  
    }
    delay(500);

}
