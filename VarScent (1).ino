void setup() {
  pinMode(2, OUTPUT);    // heating coil
  pinMode(4, OUTPUT);    // fan
  pinMode(6, OUTPUT);    // micropump
  digitalWrite(6, HIGH); // Turns micropump on
  delay(20000);            // pumps
  digitalWrite(6, LOW);  // turns off

  digitalWrite(2, HIGH);  // Turns coil on
  delay(1000);           // stays on for 1 sec
  digitalWrite(2, LOW);   //Turns coil off
  delay(1000);
  digitalWrite(4, HIGH);  // Turns fan on 
  delay(5000);            // waits for a second
  digitalWrite(4, LOW);  // turns off
  


  
}

void loop() {


  
  
}
