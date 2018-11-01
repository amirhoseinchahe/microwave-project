/*
 * here you can setput the universal variables and Serial configuration
 * the loop consists of 2 main functions
 * switch wich gets the time from the user
 * milis which start the progress
 */

int input_time_value = 0;    //the time(minute)
int remaining_time = 0;    //remaining time
bool start_stop_trigger = 0;   //start and stop the task(stop=1, start=0)
void setup() {
  Serial.begin(9600);
  Serial.println("setting up......");
  Serial.setTimeout(5);
  delay(500);
}

void loop() {
  SWITCH();
  progress_stat();
  MILIS();
  input_time_value = 0;
}
