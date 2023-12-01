int randNumber;
int magnet1 = 8; 
int magnet2 = 9;
int magnet3 = 10;
int sensore = 11;
int delayValue = 300;

void setup() {

  pinMode(magnet1, OUTPUT);
  pinMode(magnet2, OUTPUT);
  pinMode(magnet3, OUTPUT);
  pinMode(sensore, INPUT);

  digitalWrite(magnet1, LOW);
  digitalWrite(magnet2, LOW);
  digitalWrite(magnet3, LOW);

  randomSeed(analogRead(0));
}

void loop() {

  randNumber = random(4);

  if(randNumber==0){

    digitalWrite(magnet1, LOW);
    digitalWrite(magnet2, LOW);
    digitalWrite(magnet3, LOW);
    delay(delayValue);

  } 

  else if (randNumber == 1) {

    digitalWrite(magnet1, HIGH);
    delay(delayValue);
  }

  else if (randNumber == 2) {

    digitalWrite(magnet2, HIGH);
    delay(delayValue);
  }

   else if (randNumber == 3) {

    digitalWrite(magnet3, HIGH);
    delay(delayValue);
  }
  Serial.print(sensore);
  Serial.println();
}
