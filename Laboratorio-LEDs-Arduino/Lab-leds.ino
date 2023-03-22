// Pines de los LEDs
const int ledPin1 = 2;
const int ledPin2 = 4;
const int ledPin3 = 7;
const int ledPin4= 8;

// Pin del sensor de luz
const int sensorPin = A0;

// Almacenar los valores del sensor
int sensorValue = 0;

void setup() {
  // Pin del LED son salida
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);

  // Pin del sensor es entrada
  pinMode(sensorPin, INPUT);
}

void loop() {
  // Leer el valor del sensor
  sensorValue = analogRead(sensorPin);

  // Si el valor del sensor es mayor que 500, encienda el LED; de lo contrario, apáguelo
  if (sensorValue > 500) {
    // Intensidad de los LEDs
    int intensity = map(sensorValue, 0, 1023, 0, 255);

    // Encender LEDs según intensidad
    analogWrite(ledPin1, intensity);
    analogWrite(ledPin2, intensity);
    analogWrite(ledPin3, intensity);
    analogWrite(ledPin4, intensity);
  } else {
    // Apagar LEDs
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
  }
}