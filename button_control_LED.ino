int buttonPin = 2;
int ledPin = 13;
boolean ledState=false;//记录LED状态
boolean buttonState=true;//记录按键状态
//int buttonState = 0;
void setup() 
{
  // put your setup code here, to run once:
  //初始化I/O口
  pinMode(buttonPin,INPUT_PULLUP);
  pinMode(ledPin,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  //buttonState = digitalRead(buttonPin);
  //按住按键,点亮LED;放开按键后,熄灭LED;
  while(digitalRead(buttonPin)==HIGH){}//等待按键按下
  //当按键按下时,点亮或熄灭LED
  if(buttonState==true)
  {
    digitalWrite(ledPin,LOW);
    ledState=!ledState;
  }
  else
  {
    digitalWrite(ledPin,HIGH);
    ledState=!ledState;
  }
  delay(500);

}
