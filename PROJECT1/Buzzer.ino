void Buzzer() {

  while (1) {
    tone(12 , 1000);//Sound ON
    delay(100);
    noTone(12);
    delay(500);
    
    tone(12 , 2000);//Sound ON
    delay(100);
    noTone(12);
    delay(200);
 
    if (analogRead(A0) < 1000)
      break;
  }

}

