int notes[] = {262, 294, 330, 349};

void setup() {

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  int keyVal = analogRead(A0);
  
  Serial.println(keyVal);
  
  if(keyVal == 1023){
    tone(8, notes[0]);
  }else if(keyVal > 700 && keyVal <550
}
