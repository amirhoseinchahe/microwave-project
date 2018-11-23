/*
   here you can setput the universal variables and Serial configuration
   the loop consists of 2 main functions
   switch wich gets the time from the user
   milis which start the progress
*/
#define b1 3
#define b2 4
#define b3 5
#define b4 6
#define BLUE_LED 9
#define RED_LED 10
void MILIS2(void);
void SWITCH(void);

int input_trigger = 0;  //for resetting time
int input_time_value = 0;    //the time(minute)
int remaining_time = 0;    //remaining time
bool start_stop_trigger = 1;   //start and stop the task(stop=1, start=0)
int wasted_time = 0; // Time gozashte dar zamaane pause va user input
String color; // color of LED
void setup() {
  Serial.begin(9600);
  Serial.println("setting up......");
  Serial.setTimeout(5);
  delay(500);
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  pinMode(b4, INPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  //attachInterrupt(digitalPinToInterrupt(b1) , MILIS2, CHANGE);
  //attachInterrupt(input_trigger,MILIS2,CHANGE);
}

void loop() {

  input_trigger = 0;
  input_time_value = 0;
  remaining_time = 0;
  start_stop_trigger = 1;
  wasted_time = 0;
  color = "";
  SWITCH();
  progress_stat();
  //Serial.println("please press button 4 to start");
  MILIS2();
  input_time_value = 0;
}
