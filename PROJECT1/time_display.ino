/*
   it displays the remaining time
*/
void time_display(int zaman) {   //  zaman is based on second
  /* int  hour = remaining_time / 3600;
    int extrasec = remaining_time % 3600;
    int minute = extrasec / 60;
    int second = extrasec % 60;
    Serial.print("remaining time: ");
    Serial.print(hour);
    Serial.print(':');
    Serial.print(minute);
    Serial.print(':');
    Serial.print(second);
    }
  */
  int hour = zaman / 3600;
  int extrasec = zaman % 3600;
  int minute = extrasec / 60;
  int second = extrasec % 60;
  Serial.print("remaining time: ");
  Serial.print(hour);
  Serial.print(':');
  Serial.print(minute);
  Serial.print(':');
  Serial.println(second);
}
