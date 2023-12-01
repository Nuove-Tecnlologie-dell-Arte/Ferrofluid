int magnet1 = 8; 
int magnet2 = 9;
int magnet3 = 10;
int sensore = A1;
int delayValue = 150;
int value;

void setup() {

  Serial.begin(115200);

  pinMode(magnet1, OUTPUT);
  pinMode(magnet2, OUTPUT);
  pinMode(magnet3, OUTPUT);
  pinMode(sensore, INPUT);

  digitalWrite(magnet1, LOW);
  digitalWrite(magnet2, LOW);
  digitalWrite(magnet3, LOW);

}

void loop() {
  value = analogRead(sensore);
  digitalRead(sensore);
  value == digitalRead(sensore);

  if(value >= 800){

    digitalWrite(magnet1, LOW);
    digitalWrite(magnet2, LOW);
    digitalWrite(magnet3, LOW);
    delay(delayValue);

  } 

  else{

    digitalWrite(magnet1, HIGH);
    delay(delayValue);
    digitalWrite(magnet1, LOW);

    digitalWrite(magnet2, HIGH);
    delay(delayValue);
    digitalWrite(magnet2, LOW);
    
    digitalWrite(magnet3, HIGH);
    delay(delayValue);
    digitalWrite(magnet3, LOW);
    delay(delayValue);

  }
  Serial.println(value);
}
