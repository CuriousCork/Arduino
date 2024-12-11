/*
	Programador.......: (C) Diogo Ramiro
    Data..............: 11/12/2024
    Observações.......: 2º Lab
    
    Inbuilt Led Control
*/
//Constantes
const int PINO_LED = 7;
const int WAIT_TIME_MS= 500;


//Inicializações
void setup(void)	{
  pinMode(PINO_LED, OUTPUT);
}

void loop (void)	{
  digitalWrite(PINO_LED, HIGH);
  delay (WAIT_TIME_MS);
  digitalWrite(PINO_LED, LOW);
  delay (WAIT_TIME_MS);
}