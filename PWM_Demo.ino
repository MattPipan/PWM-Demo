int ledPinFlash = 12;
int ledPinShine= 10;
int button=3;
int val;
int mode=0;
void setup() {
pinMode(ledPinFlash, OUTPUT);
pinMode(ledPinShine, OUTPUT);
pinMode(button,INPUT);
}

void loop() {
  val=digitalRead(button);
  if(val==LOW)
  {
    mode=mode+1;
    delay(500);
  }
if(mode==1) //turn on both leds at const max brightness
{
  digitalWrite(ledPinShine,HIGH);
digitalWrite(ledPinFlash,HIGH);
}
  if(mode==2) //increase in speed
  {
digitalWrite(ledPinShine,LOW);
digitalWrite(ledPinFlash,LOW);
delay(3000);
digitalWrite(ledPinFlash,HIGH);
delay(1000);
digitalWrite(ledPinFlash,LOW);
delay(1000);
digitalWrite(ledPinFlash,HIGH);
delay(900);
digitalWrite(ledPinFlash,LOW);
delay(900);
digitalWrite(ledPinFlash,HIGH);
delay(800);
digitalWrite(ledPinFlash,LOW);
delay(800);
digitalWrite(ledPinFlash,HIGH);
delay(700);
digitalWrite(ledPinFlash,LOW);
delay(700);
digitalWrite(ledPinFlash,HIGH);
delay(600);
digitalWrite(ledPinFlash,LOW);
delay(600);
digitalWrite(ledPinFlash,HIGH);
delay(500);
digitalWrite(ledPinFlash,LOW);
delay(500);
digitalWrite(ledPinFlash,HIGH);
delay(400);
digitalWrite(ledPinFlash,LOW);
delay(400);
digitalWrite(ledPinFlash,HIGH);
delay(300);
digitalWrite(ledPinFlash,LOW);
delay(300);
digitalWrite(ledPinFlash,HIGH);
delay(200);
digitalWrite(ledPinFlash,LOW);
delay(200);
digitalWrite(ledPinFlash,HIGH);
delay(100);
digitalWrite(ledPinFlash,LOW);
delay(100);
digitalWrite(ledPinFlash,HIGH);
delay(75);
digitalWrite(ledPinFlash,LOW);
delay(75);
digitalWrite(ledPinFlash,HIGH);
delay(50);
digitalWrite(ledPinFlash,LOW);
delay(50);
digitalWrite(ledPinFlash,HIGH);
delay(25);
digitalWrite(ledPinFlash,LOW);
delay(25);
digitalWrite(ledPinFlash,HIGH);
delay(15);
digitalWrite(ledPinFlash,LOW);
delay(15);
digitalWrite(ledPinFlash,HIGH);
delay(10);
digitalWrite(ledPinFlash,LOW);
delay(10);
mode=mode+1;
  }
  if(mode==3) //cont brightness of shine LED, half brightness on flash LED (switching frequency=1000Hz
  {
digitalWrite(ledPinShine,HIGH);
digitalWrite(ledPinFlash,HIGH);
delay(1);
digitalWrite(ledPinFlash,LOW);
delay(3);  
  }
  if(mode==4)
{
  for(int i=0; i<=50;i++)
  {
digitalWrite(ledPinFlash,HIGH);
delay(11);
digitalWrite(ledPinFlash,LOW);
delay(4);
  }
    for(int i=0; i<=50;i++)
  {
digitalWrite(ledPinFlash,HIGH);
delay(7);
digitalWrite(ledPinFlash,LOW);
delay(7);
  }
    for(int i=0; i<=50;i++)
  {
digitalWrite(ledPinFlash,HIGH);
delay(5);
digitalWrite(ledPinFlash,LOW);
delay(10);
  }
    for(int i=0; i<=50;i++)
  {
digitalWrite(ledPinFlash,HIGH);
delay(2);
digitalWrite(ledPinFlash,LOW);
delay(13);
  }
      for(int i=0; i<=50;i++)
  {
digitalWrite(ledPinFlash,HIGH);
delay(1);
digitalWrite(ledPinFlash,LOW);
delay(18);
  }
}
}
