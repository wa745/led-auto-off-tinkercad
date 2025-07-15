const int buttonPin = 2;     // زر الضغط موصول على D2
const int ledPin = 8;        // الليد موصول على D8

bool ledState = false;       // حالة الليد
unsigned long lastPressedTime = 0;
const unsigned long autoOffDelay = 10000; // الوقت قبل الإيقاف التلقائي (10 ثواني)

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // نستخدم المقاومة الداخلية
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // ننتظر ضغط الزر (يصير LOW لأننا نستخدم INPUT_PULLUP)
  if (digitalRead(buttonPin) == LOW) {
    delay(200); // منع الاهتزاز
    if (digitalRead(buttonPin) == LOW) {
      ledState = !ledState; // نبدل حالة الليد
      digitalWrite(ledPin, ledState);
      lastPressedTime = millis(); // نسجل وقت الضغط
      while(digitalRead(buttonPin) == LOW); // ننتظر حتى يترك الزر
    }
  }

  // إذا الليد شغال وعدت المدة، يطفي تلقائيًا
  if (ledState && (millis() - lastPressedTime >= autoOffDelay)) {
    ledState = false;
    digitalWrite(ledPin, LOW);
  }
}