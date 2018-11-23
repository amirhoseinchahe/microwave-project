
void timer(int);
void time_display(int);
void Reset_trigger(void);
void turn_on_led(void);
void turn_off_led(void);


void MILIS2 () {
  int start_pause_time = 0; // when pause starts in seconds
  int end_pause_time = 0; // when pause ends in seconds

  while (1) {
    //  Serial.println("while1");
    if (start_stop_trigger == 0) { //  unpause/start the program
      turn_on_led();
      while (1) {
        //     Serial.println("while2");
        //     Serial.println("goto1");
        int initial_time = millis() / 1000;
        timer (initial_time);     //run the timer
        time_display(remaining_time);     //show the remaining time

        if (digitalRead(b3) == HIGH) {
          delay(1000);
          Reset_trigger();
        }

        else if (digitalRead(b4) == HIGH) { //pause starts
          delay(1000);
          start_pause_time = millis() / 1000;
          start_stop_trigger = 1;
        }

        if (start_stop_trigger)     //if there has been a pause trigger switch to pause part
          break;

        if (remaining_time <= 0)   //check to see if the time is over
          break;
      }
    }

    if (start_stop_trigger == 1) { //pause has been triggered and the timer is no longer running
      turn_off_led();
      time_display(remaining_time);     //show the remaining time
      Serial.println("timer has been paused. to unpause press button number 4");
      while (1) {
        if (digitalRead(b3) == HIGH) {
          delay(1000);
          Reset_trigger();
          break;
        }
        else if (digitalRead(b4) == HIGH) { //pause ends
          delay(1000);
          end_pause_time = millis() / 1000;
          wasted_time += end_pause_time - start_pause_time;
          start_stop_trigger = 0;
          break;
        }
      }
    }
    if (remaining_time <= 0) {  //check to see if the time is over
      turn_off_led();
      Serial.println("Done");
      break;
    }
  }
}
