#define led 3

void setup() {

pinMode(led,OUTPUT);

}

void loop() {

int isik = analogRead(A0);

if(isik > 700);
{
  digitalWrite(led,LOW);

}

if(isik < 700);
{
  digitalWrite(led,HIGH);
}
}
