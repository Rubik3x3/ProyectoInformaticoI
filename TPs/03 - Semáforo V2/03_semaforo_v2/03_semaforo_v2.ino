const int PIN_LED_ROJO = 7;
const int PIN_LED_AMARILLO = 6;
const int PIN_LED_VERDE = 5;
  
void setup()
{
  pinMode(PIN_LED_ROJO, OUTPUT);
  pinMode(PIN_LED_AMARILLO, OUTPUT);
  pinMode(PIN_LED_VERDE, OUTPUT);
}
void loop()
{
  digitalWrite(PIN_LED_ROJO, HIGH); 
  delay(10000);
  digitalWrite(PIN_LED_AMARILLO, HIGH);
  digitalWrite(PIN_LED_ROJO, LOW);
  delay(1000);
  digitalWrite(PIN_LED_AMARILLO, LOW);
  digitalWrite(PIN_LED_VERDE, HIGH);
  delay(10000);
  digitalWrite(PIN_LED_VERDE,LOW);
  digitalWrite(PIN_LED_AMARILLO,HIGH);
  delay(1000);
  digitalWrite(PIN_LED_AMARILLO,LOW);
}
  
