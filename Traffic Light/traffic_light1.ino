
const int GREEN_PIN =12;
const int YELLOW_PIN =11;
const int RED_PIN =10;


void setup()
{
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
}

void loop(){
  digitalWrite(12, HIGH); 
  delay(15000); 
  digitalWrite(12, LOW); 
  digitalWrite(11, HIGH);
  delay(5000);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(15000);
  digitalWrite(10, LOW);
}