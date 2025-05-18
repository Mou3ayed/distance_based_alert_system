#define green 13
#define yellow 12
#define red 11
#define buzzer 10

int inches = 0;
int cm = 0;

long readUltrasonicDistance(int triggerPin, int echoPin) {
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup() {
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  cm = 0.01723 * readUltrasonicDistance(7, 7);
  inches = cm / 2.54;

  Serial.print(inches);
  Serial.print(" in, ");
  Serial.print(cm);
  Serial.println(" cm");

  // Logic based on distance
  if (cm < 15) {
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
    digitalWrite(buzzer, HIGH);
  } else if (cm < 30) {
    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(buzzer, LOW);
  } else {
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(buzzer, LOW);
  }

  delay(200);
}
