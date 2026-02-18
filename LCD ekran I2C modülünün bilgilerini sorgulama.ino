// orn
// Ekran türü: 
// 39 {0x27}


#include <Wire.h>

void setup(){
  Serial.begin(9600);
  Wire.begin();

  for (byte e = 8; e < 150; e++){
    Wire.beginTransmission(e);
    if (Wire.endTransmission() == 0){
      Serial.println("Ekran türü: ");
      Serial.print(e, DEC);
      Serial.print(" {0x");
      Serial.print(e, HEX);
      Serial.print("}");

    }
  }

}

void loop(){} 
