void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(7, INPUT);
pinMode(9, INPUT);
pinMode(10, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(7) == HIGH){
    digitalWrite(2, HIGH);
    delay(600);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    delay(600);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(600);
    digitalWrite(4, LOW);
    }  else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    }
   if (digitalRead(9) == HIGH) {
    digitalWrite(4, HIGH);
    delay(600);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(600);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    delay(600);
    digitalWrite(2, LOW);
    }  else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
   } 
    if (digitalRead(10) == HIGH){
    digitalWrite(2, HIGH);
    delay(600);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    delay(600);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(600);
    digitalWrite(4, LOW);
    digitalWrite(4, HIGH);
    delay(600);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(600);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    delay(600);
    digitalWrite(2, LOW);
    }  else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    }
}