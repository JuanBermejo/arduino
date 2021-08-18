const int factor = 1000; //global constant

void setup() {
  //Enable the serial monitor, setting the speed of the channel
  Serial.begin(9600);
  
  //Print message in the serial monitor and add new line
  Serial.println("Hello");
  Serial.println("Example of a simple calculation");
}

void loop() {
  //Prints the time elapsed since the start of the sketch execution (in seconds)
  basic_function(millis());
  
  //Delays the execution (ms)
  delay(1000);
}

//example function definition
void basic_function(float time_elapsed_ms) {
  // This function prints the elapsed time in seconds
  float time_elapsed_s;
  time_elapsed_s = time_elapsed_ms/1000;
  Serial.print(time_elapsed_s);
  Serial.println(" s");
}
