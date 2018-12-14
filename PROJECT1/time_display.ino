/*
 * it displays the remaining time
 */
void time_display(){
  lcd.setCursor(0,0);
  lcd.print("remaining time:");
  lcd.setCursor(10,1);
  lcd.print(remaining_time);
  lcd.print(" ");
  /*lcd.print(remaining_time/60);
  lcd.print(" : ");
  lcd.print(remaining_time %60);*/
}
