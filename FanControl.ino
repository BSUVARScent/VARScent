void setup() {
  Serial.begin(9600);
  // declare the LED pins as outputs
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  if (Serial.available() > 0){
    // Read the incoming byte
    String incomingByte = String(Serial.read());

    // 1 is interpreted as the series 49 13 10
    if (incomingByte == '49') {
      // Turn on the fan
      digitalWrite(2, HIGH);
      digitalWrite(5, HIGH);
      delay(500);
      // Turn off the fan
      digitalWrite(2, LOW);
      digitalWrite(5, LOW);
    } else {
      // Debug
      //delay(5000);
      //Serial.print("I recieved: ");
      //Serial.println(incomingByte);
    }
  }
}
