int relay = 5;
int IR = A5;
int led_diode = 12;

int click = 0;

void state_machine(int ir){
  if(ir != 1023 && ir < 1000){
    if(click == 1){
      digitalWrite(relay,HIGH);
      click += 1;
    }
    else if(click == 2){
      digitalWrite(relay,LOW);
      click = 0;
    }
    else{
      click += 1;
    }
    
  }
}

void setup(){
  Serial.begin(9600);

  pinMode(relay,OUTPUT);
  pinMode(IR,INPUT);
  pinMode(led_diode,OUTPUT);
}

void loop(){
  int f = analogRead(IR);
  state_machine(f);
  delay(120);
  Serial.println(f);

} 
