#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup(){
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();

  
  lcd.println("2x-2^y");

}

void loop(){

}
