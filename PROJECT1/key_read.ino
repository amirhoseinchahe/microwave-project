/* read the input keys from keypad*/

void key_read(){
  /*bool key_value3=0;
  bool key_value5=0;
  bool key_value7=0;
  bool key_value9=0;*/
  
  /*key_value3=digitalRead(3);
  delay(100);
  if (key_value3){
    key_stat=1;//increase the time
    input_trigger=1;//pause the porogress
   // digitalWrite(7,HIGH);
    }
  key_value5=digitalRead(5);
  delay(100);
  if (key_value5){
    key_stat=4;//start the progress
    input_trigger=0;//unpause the progress 
    }*/
 /* key_value7=digitalRead(7);
  delay(100);
  if (key_value7){
    input_trigger=1;
    }
  key_value9=digitalRead(9);
  delay(100);
  if (key_value9){
    input_trigger=0;
    }*/ 
    
#define btnRIGHT 0//kire khare //GHarare bokonish reset
#define btnUP 1//increase the time
#define btnDOWN 2//decrease the time
#define btnLEFT 3//pause and unpause
#define btnSELECT 4//start the progress
#define btnNONE 5
// read the buttons

int adc_key_in = analogRead(A0); // read the value from the sensor
//Serial.println(adc_key_in);
// my buttons when read are centered at these valies: 0, 144, 329, 504, 741
// we add approx 50 to those values and check to see if we are close
while(1){
if (adc_key_in < 50){//RIGHT button
   lcd_key=btnRIGHT;//return 1;//
   
  
}

if (adc_key_in < 195) {
  lcd_key=btnUP;//return 1;//key_stat=1;//UP button //increase the time 
  break;
}
if ( adc_key_in < 380){
  lcd_key=btnDOWN;//return 2;//key_stat=2;//DOWN button //decrease the time
  break;
}
if ( adc_key_in < 555){
  lcd_key=btnLEFT;//return 4;//key_stat=4;//LEFT button //pause and unpause
  break;
}
if ( adc_key_in < 790){
  lcd_key=btnSELECT;//return 3;//key_stat=3;//SELECT button //start the progress
  break;
}
else{
  lcd_key=btnNONE;
  break;
}
}
//lcd.setCursor(10,1); // move cursor to second line "1" and 9 spaces over
//lcd.print(millis()/1000); // display seconds elapsed since power-up
lcd.setCursor(0,1); // move to the begining of the second line
switch (lcd_key) // depending on which button was pushed, we perform an 
{
case btnRIGHT:
{
//lcd.setCursor(1,0);  
lcd.print("RIGHT");
input_trigger = 3;
///*if(state)*/input_trigger=1;//pause the porogress
//else input_trigger=0;//unpause the progress
//state=!state;
break;
}
case btnLEFT:
{
//lcd.setCursor(5,0);
//lcd.print("LEFT");
//key_stat=3;
if(state)input_trigger=1;//pause the porogress
else input_trigger=0;//unpause the progress
state=!state;
break;
}
case btnUP:
{
//lcd.setCursor(10,0);  
//lcd.print("UP");
key_stat=1;
break;
}
case btnDOWN:
{
//lcd.print("DOWN");
key_stat=2;
break;
}
case btnSELECT:
{
//lcd.print("select");
key_stat=4;
break;
}
case btnNONE:
{
//lcd.print("non");
key_stat=0;
break;
}
}
     
}
