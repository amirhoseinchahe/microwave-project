/*
 * gets the time value form the user
 */
void timer_set_up() {
  //int key_stat;       //the state of keys
  lcd.setCursor(0,0);
  lcd.print("Set the timer");//1:+10 2:-5 3:reset 4:start");
  bool start_trigger = 0;
  while (1) {
    while (1) {
     /* if (Serial.available()) {
        key_stat = Serial.parseInt();
        Serial.flush();
        break;
      }*/
     key_read();
     delay(200);
     //key_stat=lcd_key;
      //Serial.println(key_stat);
      if(key_stat)
      break;
    }
    
    switch (key_stat) {
      case 1:     //increase the time
        input_time_value += 10;
        /*lcd.setCursor(10,1);
        lcd.print(" ");
        lcd.print(input_time_value);
        lcd.print(" ");*/
        time_display(input_time_value);
        key_stat=0;
        break;
      case 2:     //decrease the time
        input_time_value -= 5;
        /*lcd.setCursor(10,1);
        lcd.print(" ");
        lcd.print(input_time_value);
        lcd.print(" ");*/
        time_display(input_time_value);
        break;
      case 3:
        input_time_value = 0;     //reset
        lcd.setCursor(10,1);
        lcd.print(" ");
        lcd.print(input_time_value);
        lcd.print(" ");
        break;
      case 4:     //start the progress
        key_stat=0;
        start_trigger = 1;
        //lcd.print("initializing");
       // lcd.setCursor(0,1);
       // lcd.print("the timer for ");
        lcd.setCursor(10,1);
        lcd.print(input_time_value);
        //lcd.print(" minutes");
        break;
      key_stat = 0;
      }
    if (start_trigger){
      if (input_time_value <= 0) {  //check the time:
        lcd.setCursor(10,1);
        lcd.print("ERROR");
        delay(2000);
        lcd.setCursor(10,1);
        lcd.print("     ");
        input_time_value = 0;
      }
      if (input_time_value > 0){
       // lcd.print("task begin :D");
       lcd.clear();
       break;
      }
      start_trigger = 0;
    } 
  }
  
}
