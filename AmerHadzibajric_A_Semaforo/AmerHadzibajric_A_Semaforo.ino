int numlampeggi = 0;
int lamp = 0;
int dverde = 0;
int dgiallo = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //verde
  pinMode(12,OUTPUT); //giallo
  pinMode(10,OUTPUT); //rosso
  pinMode(5,OUTPUT); //verde
  pinMode(4,OUTPUT); //giallo
  pinMode(2,OUTPUT); //rosso
  RichiestaValori();
  RichiestaTempoLamp();
  RichiestaVerde();
  RichiestaGiallo();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (13,HIGH);
  digitalWrite(2,HIGH);
  delay(dverde);
  lampeggia(13, lamp, numlampeggi);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(4,HIGH);
  delay(dgiallo);
  digitalWrite(12,LOW);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(5,HIGH);
  delay(dverde);
  lampeggia(5, lamp, numlampeggi);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(12,HIGH);
  delay(dgiallo);
  digitalWrite(12,LOW);
  digitalWrite(4,LOW);
  digitalWrite(10,LOW);

}
void lampeggia( int led, int  rit, int c)
{
  for (int i = 0; i<=c; i++){
  delay (rit);
  digitalWrite(led,LOW);
  delay(rit);
  digitalWrite(led,HIGH);
  }
}
void RichiestaValori()
{
  Serial.begin(9600);
  Serial.println ("Quanti lampeggi verdi vuoi?");
  while(Serial.available()== 0){};
  numlampeggi = Serial.readString().toInt();
}
void RichiestaTempoLamp()
{
  Serial.begin(9600);
  Serial.println ("Quanto durano i lampeggi?");
  while(Serial.available()== 0){};
  lamp = Serial.readString().toInt();
}
void RichiestaVerde()
{
  Serial.begin(9600);
  Serial.println ("Quanto dura il verde?");
  while(Serial.available()== 0){};
  dverde = Serial.readString().toInt();
}
void RichiestaGiallo()
{
  Serial.begin(9600);
  Serial.println ("Quanto dura il giallo?");
  while(Serial.available()== 0){};
  dgiallo = Serial.readString().toInt();
}
