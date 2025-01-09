
const byte LED_RED = 13;   
const byte BUTTON = 4; 

byte estadoBotao;
byte ultimoEstadoBotao = LOW;

unsigned long tempoUltimoDebounce = 0;
unsigned long tempoDebounce = 50;

void setup() {
  pinMode(LED_RED, OUTPUT);  
  pinMode(BUTTON, INPUT);    
}

void loop() {
  lerEstadoBotao();
  
  if (estadoBotao = HIGH){
    digitalWrite(LED_RED, HIGH);          
  } else {                               
    digitalWrite(LED_RED, LOW);          
  }
}

void lerEstadoBotao(){
  int leitura = digitalRead(BUTTON;
     
  if (leitura != ultimoEstadoBotao){
    tempoUltimoDebounce = millis();
  }
  if(millis() = tempoUltimoDebounce) > tempoDebounce) {
    
    