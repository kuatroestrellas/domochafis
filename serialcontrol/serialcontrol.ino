int spk=10;
void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(spk, OUTPUT);
  analogWrite(spk, 200);
  delay(50);
  analogWrite(spk, 0);
  delay(10);
  analogWrite(spk, 200);
  delay(50);
  digitalWrite(spk, LOW);
  delay(1000);

}

void loop() {
  
  if (Serial.available() > 0) {
    int inByte = Serial.read();

    switch (inByte) {
      case '1':
        invertir(3);
        break;
      case '2':
        invertir(4);
        break;
      case '3':
        invertir(5);
        break;
      case '4':
        invertir(6);
        break;
      
    }
  }
}
void invertir(int sen){
  if (digitalRead(sen)==HIGH){
    digitalWrite(sen, LOW);
  } else{
    digitalWrite(sen, HIGH);  
  }  
}
