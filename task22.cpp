// المكونات
const int pirPin = 2;
const int trigPin = 3;
const int echoPin = 4;
const int ledPin = 7;
const int buzzerPin = 8;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // قراءة الحساس الرقمي (PIR)
  int motion = digitalRead(pirPin);
  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH); // تشغيل LED
  } else {
    digitalWrite(ledPin, LOW);
  }

  // قياس المسافة بحساس ultrasonic
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // إذا كانت المسافة أقل من 10 سم → شغل buzzer
  if (distance < 10.0) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

  delay(500);
}