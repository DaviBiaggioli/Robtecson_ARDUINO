#define pinSensor1 2
#define pinSensor2 3

void setup() {
  pinMode (pinSensor1, INPUT);
  Serial.begin(9600);
  pinMode (pinSensor2, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool estadoSensor1 = digitalRead(pinSensor1);
  bool estadoSensor2 = digitalRead(pinSensor2);
  
  if (estadoSensor1) {
    Serial.println("1-preto");
  } else {
    Serial.println("1-branco");
  }
  if (estadoSensor2) {
    Serial.println("2-preto");
  } else {
    Serial.println("2-branco");
  }

}
