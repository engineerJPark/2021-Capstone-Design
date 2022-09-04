int motorPin = 3;
 
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Speed 0 to...");
} 
 
int speed = 600;
void loop() 
{ 
  analogWrite(motorPin, speed);
}
