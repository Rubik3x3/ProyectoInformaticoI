const int LED_INTERNO = 13;
const int BUZZER = 12;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_INTERNO, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.println("Ingrese el Pin:");
}

void loop()
{
  int pinSeleccionado = 13;
  if(Serial.available() > 0)
  {
    pinSeleccionado = Serial.parseInt();
    Serial.print("Pin Seleccionado: ");
    Serial.println(pinSeleccionado);
    Serial.print("Ingrese estado del Pin ");
    Serial.println(pinSeleccionado);
    while(Serial.available() == 0)
    {
    }
    char letra = Serial.read();
    if(letra == 'p')
    {
      digitalWrite(pinSeleccionado,HIGH);
    }
    else if(letra == 'a')
    {
      noTone(BUZZER);
      digitalWrite(pinSeleccionado,LOW);
    }
    else if(letra == 'c')
    {
      if(digitalRead(pinSeleccionado) == LOW)
      {
        digitalWrite(pinSeleccionado,HIGH);
      } 
      else
      {
        digitalWrite(pinSeleccionado,LOW);
      }
    }
    else if (letra == 'z')
    {
      tone(BUZZER,400);
    }
    Serial.println("Ingrese el Pin:");
  }  
}