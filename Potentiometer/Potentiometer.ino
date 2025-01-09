/*

__________                .__                                         .__                          
\______   \_____    _____ |__|______  ____   __  _  _______    ______ |  |__   ___________   ____  
 |       _/\__  \  /     \|  \_  __ \/  _ \  \ \/ \/ /\__  \  /  ___/ |  |  \_/ __ \_  __ \_/ __ \ 
 |    |   \ / __ \|  Y Y  \  ||  | \(  <_> )  \     /  / __ \_\___ \  |   Y  \  ___/|  | \/\  ___/ 
 |____|_  /(____  /__|_|  /__||__|   \____/    \/\_/  (____  /____  > |___|  /\___  >__|    \___  >
        \/      \/      \/                                 \/     \/       \/     \/            \/ 
*/

const byte PINO_POTENCIOMETRO = A0;
const byte PINO_LED = 6;
const int BAUD_RATE = 9600;

void setup(){
  Serial.begin(BAUD_RATE);
  pinMode(PINO_LED, OUTPUT);
  pinMode(PINO_POTENCIOMETRO,INPUT);
}
void loop () {
  int leitura = analogRead(PINO_POTENCIOMETRO);
  Serial.println(leitura); 
  
  
  for(int i = 255; (i <= 255); i++) {
    analogWrite(PINO_LED, 1);
    delay(50);
  }


  
  for(int i = 255; (i >= 0); i--) {
    analogWrite(PINO_LED, 1);
    delay(50);
  }
}
