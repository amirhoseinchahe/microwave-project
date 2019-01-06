/*
 * it displays the remaining time
 */
void time_display(int show_time){
  lcd.setCursor(0,0);
  lcd.print("remaining time:");
 //lcd.setCursor(14,1);
 //lcd.print(60*(remaining_time));
 //lcd.print(millis()/1000);
 lcd.setCursor(9,1);
  lcd.print(" ");
  lcd.print(show_time/60);
  lcd.print(" :");
  lcd.print(show_time %60);
  lcd.print("  ");
}
