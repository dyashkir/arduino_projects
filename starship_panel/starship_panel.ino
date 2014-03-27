
int switchState = 0;
int i;

int blinkage(int times){
  for(i=0;i<times;i++){
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(100);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(100);
  }
}
void setup() {
  // put your setup code here, to run once:

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  
  blinkage(10);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  

  switchState = digitalRead(2);
  
  if (switchState == LOW){
    digitalWrite(3, HIGH);//green
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }else{
  
    digitalWrite(3, LOW);//green
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(1000);
  
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    
    delay(1000);
    
    blinkage(5);
  }
  
}
