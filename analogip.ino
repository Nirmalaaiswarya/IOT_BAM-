int LED=D6;
int LED1=D7;
int LED2=D4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 
 pinMode(LED,OUTPUT);
  pinMode(LED1,OUTPUT);
   pinMode(LED2,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  
  Serial.println(sensorValue);
    if(sensorValue<200){
    digitalWrite(LED,HIGH);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    
    }
    else if((sensorValue >300) && (sensorValue <500)){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED,LOW);
    digitalWrite(LED2,LOW);
     }
    else if(sensorValue >500){
     digitalWrite(LED2,HIGH);
     digitalWrite(LED1,LOW);
     digitalWrite(LED,LOW);
    }

}
