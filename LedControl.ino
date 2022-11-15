char op;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() ) {
    op = Serial.read();
    if(op == '1') {
      digitalWrite(2,HIGH);
      Serial.println("On");

    }

    else if (op == '0') {
      digitalWrite(2,LOW);
      Serial.println("On");
    }
  }
}
