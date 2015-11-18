int buttonPin = 2;
int ledPin = 13;
int buttonState = 0;
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
  buttonState = digitalRead(buttonPin);
  //按住按键,点亮LED;放开按键后,熄灭LED;
  if(buttonState==HIGH)
  {
    digitalWrite(ledPin,LOW);
  }
  else
  {
    digitalWrite(ledPin,HIGH);
  }

}
