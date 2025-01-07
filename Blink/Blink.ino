

const byte LED_PIN []= {4,5,6,7,8,9,10,11,12,13};

void setup() {
  for(byte i = 0; i <= 9; i++) {
    pinMode(LED_PIN[i], OUTPUT);
  }
  
}

void loop() {
  for(byte i = 0; i<= 9; i++){
    digitalWrite(LED_PIN[i], 1);
    delay(100);
    digitalWrite(LED_PIN[i],0);
  }
  for(int i = 9; i>= 0; i--){
    digitalWrite(LED_PIN[i], 1);
    delay(100);
    digitalWrite(LED_PIN[i],0);
  }
}