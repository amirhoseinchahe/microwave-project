/*
 * milis is a state recognizing timer
 * it allows the user to paus, unpause and reset the timer during the progress
 */

void MILIS () {
  start_stop_trigger = 0;
  while(1){
/*************************************************
this part is when the timer is running 
**************************************************/
    if (start_stop_trigger == 0){   //timer is not paused
unpause:
      int initial_time = millis() / 1000;
      while(1){
         timer(initial_time);     //run the timer
        //int input_trigger = 0;
       /* if(Serial.available()){       //check see if there is a trigger
          input_trigger = Serial.parseInt();     //pause unpause triggering
          Serial.flush();
        }*/
        
       key_read();
        delay(200);
        time_display();     //show the remaining time
        lcd.setCursor(0,1);
        lcd.print("Running   ");
        if(input_trigger == 3)
          Reset_trigger();

        else
          start_stop_trigger = input_trigger;  
          
        if(start_stop_trigger)        //if there has been a pause trigger switch to pause part
          break;
          
        if(remaining_time <= 0)    //check to see if the time is over
          break;      
      }
    }   
/***************************************************
this part is when the timer is on pause 
****************************************************/
    if (start_stop_trigger == 1){   //pause has been triggered and the timer is no longer running
      input_time_value = remaining_time;
      time_display();     //show the remaining time
      lcd.setCursor(0,1);
      lcd.print("timer paused");//. to unpause press '0'");
      while(1){     //wait untill they unpause it
       // int input_trigger = 1;
        /*if(Serial.available()){       //check see if there is a trigger
          input_trigger = Serial.parseInt();     //pause unpause triggering
          Serial.flush();
        }*/
        key_read();
        delay(200);
        
        if(input_trigger == 3){
          Reset_trigger();
          break;
        }
        else
          start_stop_trigger = input_trigger;  
        if(!start_stop_trigger)       //if there has been an unpause trigger switch to unpause part
          goto unpause;
      }
    }
/***************************************************
this part checks to see if the time is over
****************************************************/
  if(remaining_time <= 0)    //check to see if the time is over
  lcd.setCursor(10,1);
    lcd.print("Done");
    break; 
  }
}
