int counter = 0;  //Set counter to zero
const int trip_length = 30;  //Time to reach Jupiter in ms
void setup() {
  //Enable the serial monitor, setting the speed of the channel
  Serial.begin(9600);
  
  //Print message in the serial monitor and add new line
  Serial.println("Hello, I'm HAL 9000.");
  Serial.println("The countdown to reach Jupiter has started.");
}

void loop() {
  //Counter control loop
  int time_to_jupiter;
  if (counter < trip_length)
  {
    Serial.print(counter);
    Serial.println(" seconds elapsed since mission started");
    time_to_jupiter = remaining_time(counter);
    Serial.print(time_to_jupiter);
    Serial.println(" seconds to arrive");
  } else
  {
    Serial.print(counter);
    Serial.println(" seconds elapsed since mission started");
    Serial.println("Destination reached.");
  }
  //Wait 1 second to check again
  delay(1000);

  //increase counter by 1
  counter++;
}

int remaining_time(int time_elapsed_s) {
  // This function returns the remaining time to reach jupiter in s
  int t;
  t =  trip_length - time_elapsed_s;
  return t;
}
