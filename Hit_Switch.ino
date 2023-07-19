#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
#define in1 10
#define in2 11
#define in3 12
#define in4 13
int switch1= A3;
int switch2= A0;
void setup() {
lcd.init();
lcd.backlight();
pinMode(in1, OUTPUT); //IN1
pinMode(in2, OUTPUT); //IN2
pinMode(in3, OUTPUT); //IN3
pinMode(in4, OUTPUT); //IN4
pinMode(switch1, INPUT_PULLUP);
pinMode(switch2, INPUT_PULLUP);
}
void loop() {
if(digitalRead(switch1)==LOW||digitalRead(switch1)==LOW){
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
lcd.setCursor(0,0);
lcd.print("Object Detected");
delay(500);
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
delay(500);
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
delay(3000);
}
else{
lcd.clear();
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(500);
}
}