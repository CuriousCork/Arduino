
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
  digitalWrite(GREEN_PIN, HIGH); 
  delay(15000); 
  digitalWrite(GREEN_PIN, LOW); 
  digitalWrite(YELLOW_PIN, HIGH);
  delay(5000);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(RED_PIN, HIGH);
  delay(15000);
  digitalWrite(RED_PIN, LOW);
}