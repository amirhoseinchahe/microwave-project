void SWITCH(int KS){
  switch (KS){
    case 1://increase the time
      t+=15;
      Serial.println(t);
      break;
    case 2://decrease the time
      t-=5;
      Serial.println(t);
      break;
    case 3://switch between start and stop
      if(sp){
        sp=0;
        Serial.println("STOP");     
      }
      else {
        sp=1;
        Serial.println("STRAT");
      }
      Serial.println(t);  
     break;
  }
  //check the time:
    if(t<0){
    Serial.println("ERROR");
    t=0;
   }
   y=millis()/1000;

}
