/*
  this function turns on the LED
*/
void turn_on_led() {
  if (color == "BLUE") {
    digitalWrite(BLUE_LED, HIGH);
  } else if (color == "RED") {
    digitalWrite(RED_LED, HIGH);
  }
}
