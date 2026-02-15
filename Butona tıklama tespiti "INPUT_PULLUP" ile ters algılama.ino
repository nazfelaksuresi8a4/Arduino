int button_pin = 8;

void setup(){
  //9600 baud
  Serial.begin(9600);

  pinMode(button_pin,INPUT_PULLUP);
  
}

void loop(){
  int binx = digitalRead(button_pin);

  if(binx == 0){
    Serial.println("Butona basıldı");
      }

  else if(binx == 1){
    Serial.println("Bekliyor");
    }
}

