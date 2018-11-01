/*
 * if the user wants to reset the progress this fucntion will be called
 */
void Reset_trigger(){
  Serial.println("are you sure you want to reset? (Y/N)");
  while(1){
    bool check_value = 0;
    if(Serial.available()){
      check_value = Serial.parseInt();
      Serial.flush();
    }
    if(check_value){
      remaining_time = 0;
      Serial.println("the timer has been resetted");
      break;  
    }
    
  }
}

