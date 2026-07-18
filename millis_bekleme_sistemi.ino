int contactor = 5;

bool state = false;
bool outputState = false;

unsigned long contact_duration;
unsigned long prev_millis = 0;

void setup() {
  Serial.begin(9600);

  pinMode(contactor, OUTPUT);
  digitalWrite(contactor, HIGH);
}

void loop() {

  // Her zaman seri portu kontrol et
  if (Serial.available()) {

    String received = Serial.readStringUntil('\n');
    int sliced_index = received.indexOf("-"); 
  
    if (sliced_index != -1){
      int contact_state = received.substring(0,sliced_index).toInt();
      contact_duration = received.substring(sliced_index+1).toInt();

      if (contact_state == 1){
        state = true;
      }
      else if (contact_state == 0){
        state = false;
        digitalWrite(contactor,HIGH);
      }

    }
    else{
      state = false;
      digitalWrite(contactor,HIGH);
    }
  }
    if (state){
      unsigned long current_millis = millis();

      if (current_millis - prev_millis >= contact_duration){
        prev_millis = current_millis;
        outputState = !outputState;
      }

      if (outputState == true){
        digitalWrite(contactor,LOW);
      }
      else if(outputState == false){
        digitalWrite(contactor,HIGH);
      }
    }
}
