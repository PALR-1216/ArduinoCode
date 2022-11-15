// C++ code
//
void setup()
{
  //led pin
 pinMode(2,OUTPUT);
  //buzzer pin
  pinMode(4,OUTPUT);
  //ldr inpit
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int lightSensor = analogRead(A1);
  Serial.println(lightSensor);
  
  if(lightSensor >= 400){
    tone(4,100);
    digitalWrite(2,HIGH);
    delay(1000);
    noTone(4);
    digitalWrite(2,LOW);
    
  }

}
