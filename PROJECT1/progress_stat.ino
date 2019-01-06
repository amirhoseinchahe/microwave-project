/*
 * it asks the user wether or not the blue lamp is going to on or the red lamp
 * in general it gets the stat of the progeress
 */
void progress_stat(){
  bool light;

   if (Serial.available()) {
  light=Serial.parseInt();
     if(light){
      Serial.println("BLUE LIGHT IS ON");
     }
     else{
      Serial.print("RED LIGHT IS ON");
     }
   }
}

