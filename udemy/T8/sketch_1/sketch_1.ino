void setup() {
  //Enable the serial monitor, setting the speed of the channel
  Serial.begin(9600);
  //Print message in the serial monitor and add new line
  Serial.println("Hello");
  Serial.print("Hello again");
}

void loop() {
  //Prints the time elapsed since the start of the sketch execution (in milisenconds)
  Serial.println(millis());
  //delays the execution (ms)
  delay(1000);
}
