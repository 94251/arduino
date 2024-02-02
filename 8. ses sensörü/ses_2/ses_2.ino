const int LED = 13;
const int Sensor = A0;

int seviye;
const int esik = 640;

void setup()
{
pinMode (LED, OUTPUT);
Serial.begin(9600);
}

void loop() {
seviye = analogRead(Sensor);
if (seviye > esik)
{
digitalWrite (LED, HIGH);
delay (1000);
digitalWrite (LED, LOW);
}
else
{
digitalWrite(LED, LOW);
}
}
