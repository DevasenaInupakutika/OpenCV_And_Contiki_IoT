
int servopin = 4;  //using digital pin 4
int pulse = 1500; // Value should usually be 500 to 2500

void setup() {
  // put your setup code here, to run once:
  pinMode(servopin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(servopin, HIGH);   //set the pin HIGH to +5V
  delayMicroseconds(pulse);      //wait for a specific time
  digitalWrite(servopin, LOW);   //set the pin LOW
  delay(20);                     //servo needs to be updated every 20-40 ms
}
