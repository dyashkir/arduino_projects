
const int switchPin = 8;
unsigned long previousTime = 0;

int switchState = 0;
int prevSwitchState = 0;

int led = 2;

long interval = 1000;

void setup() {
  // put your setup code here, to run once:
  
  for(int x= 2; x < 8; x++){
    pinMode(x, OUTPUT);
  }
  
  pinMode(switchPin, INPUT);
  
  pinMode(12, OUTPUT);
  digitalWrite(12, LOW);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  unsigned long curTime = millis();
  
  
  if (curTime-previousTime > interval){
    previousTime = curTime;
    digitalWrite(led, HIGH);
    Serial.print(led);
    led++;
    
    if (led == 8){
      tone(12, 400);
    }
  }
  
  switchState = digitalRead(switchPin);
  
  if(switchState != prevSwitchState){
    Serial.print("State switch\n");
    for(int x= 2; x < 8; x++){
      digitalWrite(x, LOW);
    }
    led = 2;
    previousTime = curTime;
    
  }
  
  prevSwitchState = switchState;
  

}
