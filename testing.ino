int relay = 8;
int data;
void setup () {
  Serial.begin(9600);
  pinMode (relay, OUTPUT);
}
void loop () {
  if (Serial.available() > 0) {
    data = Serial.read();
    if (data == 'A') {
      digitalWrite (relay, HIGH);
      Serial.println("Bulb is ON");
    }
    if (data == 'B') {
      digitalWrite (relay, LOW);
      Serial.println("Bulb is OFF");
    }
  }
}
