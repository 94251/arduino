
#define red 13
#define Sensor 8
byte alkis = 0;
byte sayac= 0;

long ilk_ses = 0;
long son_ses = 0;


void setup() {
  pinMode(Sensor, INPUT);
  pinMode(red,OUTPUT);

  

}

void loop() {
int sensor_deger = digitalRead(Sensor);
if (sensor_deger == 1)
{
if (alkis == 0)
{
ilk_ses = son_ses = millis();
alkis++;
}
else if (alkis > 0 && millis()-son_ses >= 50)
{
son_ses = millis();
alkis++;
}
}
if (millis()-ilk_ses >= 400)
{
if (alkis == 2)
{


 sayac++;



}
alkis = 0;
if (sayac>=4)
 {
  sayac=0;
  }

}


switch(sayac)

     {
      
      case 1:
      digitalWrite(red,1);
       break;
      
      default:
      
      digitalWrite(red,0);
   
      }
}
