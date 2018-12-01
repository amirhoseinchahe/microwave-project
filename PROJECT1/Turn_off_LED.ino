/*
 THIS FUNCTION TURNS OFF THE LED
*/
void turn_off_led() {
  if (color == "BLUE") {
    digitalWrite(BLUE_LED, LOW);
  } else if (color == "RED") {
    digitalWrite(RED_LED, LOW);
  }
}
