const int LED_ROJO = 11;
const int LED_AZUL = 10;
const int LED_AMARILLO = 4;
const int LED_VERDE = 3;

const int TILT_1 = 12;
const int TILT_2 = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_ROJO,OUTPUT);
  pinMode(LED_AZUL,OUTPUT);
  pinMode(LED_AMARILLO,OUTPUT);
  pinMode(LED_VERDE,OUTPUT);
  pinMode(TILT_1,INPUT_PULLUP);
  pinMode(TILT_2,INPUT_PULLUP);
}
void loop()
{
  if (digitalRead(TILT_1)==LOW)
  {
     if (digitalRead(TILT_2)==LOW)
    {
		digitalWrite(LED_AZUL,HIGH);
        digitalWrite(LED_ROJO,LOW);
      	digitalWrite(LED_AMARILLO,LOW);
      	digitalWrite(LED_VERDE,LOW);
        Serial.println("Adelante");
    }
    else
    {
		digitalWrite(LED_VERDE,HIGH);
      	digitalWrite(LED_ROJO,LOW);
      	digitalWrite(LED_AZUL,LOW);
      	digitalWrite(LED_AMARILLO,LOW);
      	Serial.println("Derecha");
    }
  }
  else
  {
    if (digitalRead(TILT_2)==LOW)
    {
		digitalWrite(LED_ROJO,HIGH);
      	digitalWrite(LED_AZUL,LOW);
      	digitalWrite(LED_AMARILLO,LOW);
      	digitalWrite(LED_VERDE,LOW);
      	Serial.println("Izquierda");
    }
    else
    {
		digitalWrite(LED_AMARILLO,HIGH);
      	digitalWrite(LED_ROJO,LOW);
      	digitalWrite(LED_AZUL,LOW);
      	digitalWrite(LED_VERDE,LOW);
      	Serial.println("Atras");
    }
  }
}
