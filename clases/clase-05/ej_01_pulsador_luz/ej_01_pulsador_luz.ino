// ej_00_lectura_pulsador
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// variable para leer info
int pinLectura = 7;

// variable para almacenar estado pulsador
int estadoPulsador = 0;

// variable para conectar LED
int pinLED = 6;

// variable para estado LED
int estadoLED = 0;

void setup() {

  // definir pin lectura como entrada digital
  pinMode(pinLectura, INPUT);

  // definir pin LED como salida digital
  pinMode(pinLED, OUTPUT);

  // abrir comunicacion serial
  Serial.begin(9600);

}

void loop() {

  // leer pin y actualizar variable interna
  estadoPulsador = digitalRead(pinLectura);

  // imprimir informacion por puerto serial
  Serial.println(estadoPulsador);

  estadoLED = estadoPulsador;

  digitalWrite(pinLED, estadoLED);

  // pausa de 1000 milisegundos
  delay(1000);

}
