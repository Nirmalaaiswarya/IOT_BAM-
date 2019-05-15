int LEDPIN1=D6;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
analogWrite(LEDPIN1,199);

}

void loop() {
  // put your main code here, to run repeatedly:
  int dutycycle=analogRead(A0);
  if(dutycycle > 199) 
  Serial.print("Duty Cycle:");
  Serial.println(dutycycle);
  analogWrite(LEDPIN1,dutycycle);
  delay(1000);
 

}
