void MILIS (int ){
  while(1){
  if(Serial.available()){
    p=Serial.parseInt();
    Serial.flush();
  
   if(p==3){
     Serial.println("PAUSE");
     t=t+y-millis()/1000;
     Serial.print("TIME REMAINING:");
     Serial.println(t);
     p=0;
    while(1){
     if(Serial.available()){
       p=Serial.parseInt();
       Serial.flush();
     }  
     if(p==3){
       Serial.println("START");
       p=0;
       break;
        }
      if(p==4){
       
       goto reset;
        break;
      }
      }
    }
   y=millis()/1000;
   //Serial.println(y);
  }
  
  if(t==millis()/1000-y || p==4){

    Serial.println("FINISH");
    reset:
    Serial.println("RESTART");
    sp=0;
    t=0;

   // y=0; 
    break;
    }
       
  }
  
}

