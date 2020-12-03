void setup() {
  pinMode(2, OUTPUT);    //heating coil
  pinMode(4, OUTPUT);    //  fan
  pinMode(6, OUTPUT);    //micropump
  digitalWrite(6, HIGH);  //turns on micropump
  delay(3000);      // turns off micropump
  digitalWrite(6, LOW);
  digitalWrite(2, HIGH);
  delay(500);   
  digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(4, HIGH);
  delay (2000);
  digitalWrite(4, LOW);
}

void loop() {}
