// C++ code
//

// macro para alterar todo "LED" pelo número "12"
#define LED 12

void setup()
{
  // define a porta do led como output
  pinMode(LED, OUTPUT);
}

void loop()
{
  // acende o led
  digitalWrite(LED, HIGH);
  
  // espera 0.5 segundos
  delay(500);
  
  // apaga o led
  digitalWrite(LED, LOW);
  
  // espera 0.5 segundos
  delay(500);
}