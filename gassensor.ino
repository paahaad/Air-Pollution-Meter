int sensor = A0;
int sensorvalue = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorvalue = analogRead(sensor);
  Serial.println(sensorvalue);
  
  

}
