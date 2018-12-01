/*
   gets the time value form the user
*/
void SWITCH() {
  /*  int key_stat;       //the state of keys
    Serial.println("Set the timer 1:+10 2:-5 3:reset 4:start");
    bool start_trigger = 0;
    while (1) {
      while (1) {
        if (Serial.available()) {
          key_stat = Serial.parseInt();
          Serial.flush();
          break;
        }
      }
      switch (key_stat) {
        case 1:     //increase the time
          input_time_value += 10;
          Serial.println(input_time_value);
          break;
        case 2:     //decrease the time
          input_time_value -= 5;
          Serial.println(input_time_value);
          break;
        case 3:
          input_time_value = 0;     //reset
          Serial.println(input_time_value);
          break;
        case 4:     //start the progress
          start_trigger = 1;
          Serial.print("initializing the timer for ");
          Serial.print(input_time_value);
          Serial.println(" minutes");
          break;
        key_stat = 0;
        }
      if (start_trigger){
        if (input_time_value <= 0) {  //check the time:
          Serial.println("ERROR");
          input_time_value = 0;
        }
        if (input_time_value > 0){
          Serial.println("let the progress begin :D");
          break;
        }
        start_trigger = 0;
      }
    }

    }*/
  Serial.println("Set the timer 1: +10 2: -5 3: reset 4: start");

  while (1) {
    bool start_trigger = 0;
    if (digitalRead(b1) == HIGH) {     //increase the time
      input_time_value += 10;
      time_display(input_time_value * 60);
      delay(1000);
    }
    else if (digitalRead(b2) == HIGH) { //decrease the time
      input_time_value -= 5;
      time_display(input_time_value * 60);
      delay(1000);
    }
    else if (digitalRead(b3) == HIGH) { //reset
      input_time_value = 0;
      time_display(input_time_value * 60);
      delay(1000);
    }
    else if (digitalRead(b4) == HIGH) { //start the progress,infact button4 accept the time,not start it,starting the time is milis function's duty
      start_trigger = 1;
      Serial.print("initializing the timer for ");
      time_display(input_time_value * 60);
      delay(1000);
    }
    if (start_trigger == 1) {
      if (input_time_value <= 0) {  //check the time:
        Serial.println("ERROR");
        input_time_value = 0;
        start_trigger = 0;
      }
      else {
        remaining_time = input_time_value * 60;
        Serial.println("let the progress begin :D");
        break;
      }
    }
  }
}
