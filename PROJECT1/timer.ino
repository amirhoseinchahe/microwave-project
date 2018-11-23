/*
   counts down the timer and does all the math work for changin time into minutes and hours
*/
void timer(int in_time) { //in_time & remaining_time are based on second
  int delta_time = in_time - wasted_time;
  remaining_time = input_time_value * 60 - delta_time;
}
