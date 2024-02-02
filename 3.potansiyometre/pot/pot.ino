#define pot A0
#define led 9

void setup() {
//analod okuma yapacağımız için pinmode komutuna gerek yok.
pinmode digital olunca kullanılır
}

void loop() {
  int deger = analogRead(pot);
  deger = deger/4;
  analogWrite(led, deger);

}
