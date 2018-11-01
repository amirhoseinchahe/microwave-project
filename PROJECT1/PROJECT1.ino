int KS;   //the state of keys
float t=0; //the TIME(minute)
int sp=0; //start and stop the task(start=1,stop=0
int p=0;//pause and start during the task
float y;//time measure
void setup() {
  Serial.begin(9600);
  Serial.println("WELCOM!,SET THE TIME:");
}

void loop() {
  if(Serial.available()){
    KS=Serial.parseInt();
    Serial.flush();
   
    SWITCH(KS);//set time 
    //reset:
      // Serial.println("reset");
    if(sp) MILIS(t);//timing ,sart and pause the task
   
      // Serial.print("duration:");
    //Serial.println(millis()/1000);
    Serial.println("BOX BOX .co");
    //sp=0;
   // t=0;
    }
    KS=0;//return to initial state
    Serial.flush();
}
