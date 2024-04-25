const int LED_ROJO = 11;
const int LED_VERDE = 10;
const int PULSADOR = 8;
const int BUZZER = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(PULSADOR, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  
}

void loop()
{
  if (digitalRead(PULSADOR) == LOW){
    digitalWrite(LED_ROJO,HIGH);
    digitalWrite(LED_VERDE,LOW);
    noTone(BUZZER);
  }
  else{
    digitalWrite(LED_ROJO,LOW);
    digitalWrite(LED_VERDE,HIGH);
    tone(BUZZER,440);
  }
    
}
