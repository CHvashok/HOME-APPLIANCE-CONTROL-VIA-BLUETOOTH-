// android control by Arduino blutooth controller application//

#include<LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);


const int light=9;
const int fan=10;
const int wm=11;
int val;


void setup() {
   Serial.begin(9600);
   lcd.begin(16,2);  
   pinMode(light,OUTPUT);
   pinMode(fan,OUTPUT);
   pinMode(wm,OUTPUT);
   digitalWrite(light,LOW);
   digitalWrite(fan,LOW);
   digitalWrite(wm,LOW);
    project_name();
    delay(1000);
}

void loop() 
{
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("LIGHT:");
     lcd.setCursor(9,0);
     lcd.print("FAN:");
     lcd.setCursor(0,1);
     lcd.print("WATERMOTOR:");
     
     if (Serial.available() > 0)
     {
         val=Serial.read();
         Serial.println(val);
      if (val == 49)
        {
          digitalWrite(light,HIGH);
          lcd.setCursor(5,0);
          lcd.print("ONN");
        }
        else if (val == 48)
        {
         digitalWrite(light,LOW);
         lcd.setCursor(5,0);
         lcd.print("OFF");  
        }
        if (val == 50)
        {
          digitalWrite(fan,LOW);
          lcd.setCursor(13,0);
          lcd.print("ONN");
        }
        else if (val == 51)
        {
         digitalWrite(fan,HIGH);
         lcd.setCursor(13,0);
         lcd.print("OFF");
        }
        if (val == 52)
        {
          digitalWrite(wm,HIGH);
           lcd.setCursor(11,1);
           lcd.print("ONN");
        }
        else if (val == 53)
        {
         digitalWrite(wm,LOW);
          lcd.setCursor(11,1);
          lcd.print("OFF");
        }
     }
     delay(500);
 }  

 void project_name()
 {
     lcd.setCursor(0 , 0);
     lcd.print("  ANDROID HOME ");
     lcd.setCursor(0, 1);
     lcd.print("APPLIANCECONTROL");
     delay(3000);
     lcd.clear();
 }
