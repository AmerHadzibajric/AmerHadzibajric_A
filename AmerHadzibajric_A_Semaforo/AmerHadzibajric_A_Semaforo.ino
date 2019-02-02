void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //verde
  pinMode(12,OUTPUT); //giallo
  pinMode(10,OUTPUT); //rosso
  pinMode(5,OUTPUT); //verde
  pinMode(4,OUTPUT); //giallo
  pinMode(2,OUTPUT); //rosso
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  digitalWrite(2,HIGH);
  delay(100);
  lampeggia(13, 500, 3);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  delay(500);
  digitalWrite(10,HIGH);
  digitalWrite(5,HIGH);
  delay(1000);
  lampeggia(5, 500, 3);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(4,LOW);
  digitalWrite(10,LOW);

}
void lampeggia(int led, int rit, int c)
{
  for (int i = 0; i<=c; i++){
  delay (rit);
  digitalWrite(led,LOW);
  delay(rit);
  digitalWrite(led,HIGH);
  }
  
}
