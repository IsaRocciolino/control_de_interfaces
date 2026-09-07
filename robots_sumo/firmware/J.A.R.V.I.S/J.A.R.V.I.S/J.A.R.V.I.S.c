// Definición de pines según tu esquema de KiCad
const int IN1 = 2; // Control motor 1 (GPIO2)
const int IN2 = 3; // Control motor 1 (GPIO3)
const int IN3 = 4; // Control motor 2 (GPIO4)
const int IN4 = 5; // Control motor 2 (GPIO5)

void setup() {
  // Configurar todos los pines de control como salidas
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // 1. Avanzar por 2 segundos
  avanzar();
  delay(2000);

  // 2. Detenerse por 1 segundo
  detener();
  delay(1000);

  // 3. Retroceder por 2 segundos
  retroceder();
  delay(2000);

  // 4. Detenerse por 1 segundo
  detener();
  delay(1000);

  // 5. Girar a la derecha por 1.5 segundos
  girarDerecha();
  delay(1500);

  // 6. Detenerse por 1 segundo
  detener();
  delay(1000);
}

// --- Funciones de Movimiento ---

void avanzar() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void retroceder() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void girarDerecha() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void girarIzquierda() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void detener() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}