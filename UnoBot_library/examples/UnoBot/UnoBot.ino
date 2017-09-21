#include "Uno_Servo_Bot.h"

#define Left_wheel 2  //声明左轮连接2号口
#define Right_wheel 3  //声明右轮链接3号口

UnoBot UnoBot1();

void setup() 
{
 
  tone(13, 3000);//板载蜂鸣器发出频率为3000Hz的声音
  delay(50);
  noTone(13);//关闭蜂鸣器

}

void loop() 
{

  

}
