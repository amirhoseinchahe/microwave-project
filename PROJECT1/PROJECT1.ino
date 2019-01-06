#include <LiquidCrystal.h>

/*
 * here you can setput the universal variables and Serial configuration
 * the loop consists of 2 main functions
 * switch wich gets the time from the user
 * milis which start the progress
 */
 
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void MILIS ();
void Reset_trigger();
void progress_stat();
void time_display();
void timer_set_up();
void timer(int);
void key_read();

int lcd_key;//used in key_read
bool state=1;//used in key_read 
int key_stat=0;//used in timer_set_up & key_read
int input_trigger = 0;//used in MILIS & key_read for input keys
int input_time_value = 0;    //the time(minute)
int remaining_time = 0;    //remaining time
bool start_stop_trigger = 0;   //start and stop the task(stop=1, start=0)
bool rel=0;  //Relay ON or OFF
//bool buz=0;  //Buzzer NO or OFF

void setup() {
  lcd.begin(16, 2);//LCD setup
  pinMode(12 , OUTPUT);//BUZZER 
  pinMode(13 , OUTPUT);//RELAY
  //pinMode(3,INPUT);
  //pinMode(5,INPUT);
  //pinMode(7,INPUT);
  //pinMode(9,INPUT);
  
  Serial.begin(9600);
  lcd.print("setting up...");
  Serial.setTimeout(5);
  delay(500);
}

void loop() {
 // key_read();
  timer_set_up();
  progress_stat();
  MILIS();
  input_time_value = 0;
}
