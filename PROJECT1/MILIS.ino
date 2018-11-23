/*
 * milis is a state recognizing timer
 * it allows the user to paus, unpause and reset the timer during the progress
 */

/*void MILIS () {
 // start_stop_trigger = 0;
  while(1){
/*************************************************
this part is when the timer is running 
**************************************************/
/*while(1){
    if (start_stop_trigger == 0){   //timer is not paused
unpause:
      int initial_time = millis() / 1000;
        timer (initial_time);     //run the timer
         time_display(remaining_time);     //show the remaining time
        //  if(input_trigger == 3)
        
        if(digitalRead(b3))
          Reset_trigger();
        
        else if(digitalRead(b4))
          start_stop_trigger = 1; 
          
          if(start_stop_trigger)      //if there has been a pause trigger switch to pause part
          break;
          
           if(remaining_time <= 0)    //check to see if the time is over
          break;      
    }
}
  /*   while(1){
        timer (initial_time);     //run the timer
       // int input_trigger = 0;
        if(Serial.available()){       //check see if there is a trigger
          ipnut_trigger = Serial.parseInt();     //pause unpause triggering
          Serial.flush();
        }
        time_display();     //show the remaining time
        if(input_trigger == 3)
          Reset_trigger();
        
        else
          start_stop_trigger = input_trigger;  
          
        if(start_stop_trigger)        //if there has been a pause trigger switch to pause part
          break;
          
        if(remaining_time <= 0)    //check to see if the time is over
          break;      
      }*/
 //   }   
/***************************************************
this part is when the timer is on pause 
****************************************************/

 /*   if (start_stop_trigger == 1){   //pause has been triggered and the timer is no longer running
      while(1){
      input_time_value = remaining_time;
      time_display(input_time_value);     //show the remaining time
      Serial.println("timer has been paused. to unpause press button number 4");
      if(digitalRead(b3)){
          Reset_trigger();
          break;
      }
      else if(digitalRead(b4))
      start_stop_trigger =0;
           if(!start_stop_trigger)       //if there has been an unpause trigger switch to unpause part
          goto unpause;
     /* while(1){     //wait untill they unpause it
        int input_trigger = 1;
        if(Serial.available()){       //check see if there is a trigger
          input_trigger = Serial.parseInt();     //pause unpause triggering
          Serial.flush();
        }
        if(input_trigger == 3){
          Reset_trigger();
          break;
        }
        else
          start_stop_trigger = input_trigger;  
        if(!start_stop_trigger)       //if there has been an unpause trigger switch to unpause part
          goto unpause;
      }*/
 //   }
  //  }
/***************************************************
this part checks to see if the time is over
****************************************************/
/*  if(remaining_time <= 0)    //check to see if the time is over
    Serial.println("Done");
    break; 
  }
}*/
