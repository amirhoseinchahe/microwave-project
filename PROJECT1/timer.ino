/*
 * counts down the timer and does all the math work for changin time into minutes and hours
 */
void timer(int in_time){
  int delta_time = millis() / 1000 - in_time;
  remaining_time = input_time_value - delta_time;
}

