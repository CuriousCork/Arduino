#include <IRremote.h>

const int BAUD_RATE = 9600;
const byte TRIGGER_PIN = 11;
const byte ECHO_PIN = 12;

const int MEASUREMENT_CYCLE = 60000;
const int PULSE_TRIGGER_TIME = 10;

float highLevelTime;

void setup(){
  Serial.begin(BAUD_RATE);
  
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop(){
  Serial.println("A ler o sonar...");
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(MEASUREMENT_CYCLE);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(PULSE_TRIGGER_TIME);
  digitalWrite(TRIGGER_PIN, LOW);
  
  highLevelTime = pulseIn(ECHO_PIN, HIGH);
  
  Serial.println("High Level Time:" + String(highLevelTime));
  
}