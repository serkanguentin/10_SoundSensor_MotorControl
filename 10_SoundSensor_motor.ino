

#define SensorPin 3
#define MotorPin 5 
int MotorState = LOW;

void setup() {
 
  pinMode(SensorPin, INPUT);
  pinMode(MotorPin, OUTPUT);
}

void loop() {
  

  if( digitalRead(SensorPin) ){

    if(MotorState == LOW){

      MotorState = HIGH;
    }
    else{

      MotorState = LOW;
    }

    digitalWrite(MotorPin, MotorState);

  }
  delay(50);
  

}