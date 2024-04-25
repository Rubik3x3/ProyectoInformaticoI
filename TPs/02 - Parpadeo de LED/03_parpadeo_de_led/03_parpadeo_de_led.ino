// Programa para encender y apagar un LED cada un segundo.

const int PIN_LED = 13;  //constante (NO se puede modificar a lo largo del programa)
void setup() // Función se ejecuta 1 sola vez al principio
{
  // Orden: SALIDA
  // Pregunta: ENTRADA
  
  pinMode(PIN_LED, OUTPUT); // Configuración de los pines E/S
}

void loop() // Funcion que se ejecuta REPETIDAS VECES despues del setup
{
  digitalWrite(PIN_LED, HIGH); //Encender
  delay(1000); //Esperar 1000 milisegudos = 1
  digitalWrite(PIN_LED, LOW); //Apagar
  delay(1000); //Esperar
}
  
