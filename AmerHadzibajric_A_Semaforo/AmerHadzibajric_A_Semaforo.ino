int numlampeggi = 0;
int lamp = 0;
int dverde = 0;
int dgiallo = 0;
int verde1 = 13;
int giallo1 = 12;
int rosso1 = 10;
int verde2 = 5;
int giallo2 = 4;
int rosso2 = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(verde1,OUTPUT); //verde
  pinMode(giallo1,OUTPUT); //giallo
  pinMode(rosso1,OUTPUT); //rosso
  pinMode(verde2,OUTPUT); //verde
  pinMode(giallo2,OUTPUT); //giallo
  pinMode(rosso2,OUTPUT); //rosso
  RichiestaValori();
  RichiestaTempoLamp();
  RichiestaVerde();
  RichiestaGiallo();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (verde1,HIGH);
  digitalWrite(rosso2,HIGH);
  delay(dverde);
  lampeggia(verde1, lamp, numlampeggi);
  digitalWrite(verde1,LOW);
  digitalWrite(giallo1,HIGH);
  digitalWrite(giallo2,HIGH);
  delay(dgiallo);
  digitalWrite(giallo1,LOW);
  digitalWrite(rosso2,LOW);
  digitalWrite(giallo2,LOW);
  digitalWrite(rosso1,HIGH);
  digitalWrite(verde2,HIGH);
  delay(dverde);
  lampeggia(5, lamp, numlampeggi);
  digitalWrite(verde2,LOW);
  digitalWrite(giallo2,HIGH);
  digitalWrite(giallo1,HIGH);
  delay(dgiallo);
  digitalWrite(giallo1,LOW);
  digitalWrite(giallo2,LOW);
  digitalWrite(rosso1,LOW);

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
