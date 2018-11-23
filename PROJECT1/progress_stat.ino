/*
   it asks the user wether or not the blue lamp is going to on or the red lamp
   in general it gets the stat of the progeress
*/
void progress_stat() {
  Serial.println("button1 for blue and button2 for red");
  while (1) {
    if (digitalRead(b1) == HIGH) {
      color = "BLUE";
      delay(500);
      break;
    }
    else if (digitalRead(b2) == HIGH) {
      color = "RED";
      delay(500);
      break;
    }
  }
}
