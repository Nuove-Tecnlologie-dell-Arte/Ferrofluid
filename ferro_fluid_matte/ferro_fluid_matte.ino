int delayValue = 150;
int lum = 500;

short magnete_min = 5;
short magnete_max = 10;

int primo_sensore = A1;
int secondo_sensore = A2;

int valore_primo_sensore;
int valore_secondo_sensore;

void setup() {
  Serial.begin(115200);

  int i;
  for(i = magnete_min; i <= magnete_max; i++) {
    pinMode(i, OUTPUT);
  }
}

void cambiaStato(int min, int max) {
  int i;
  for(i = min; i <= max; i++) {
    digitalWrite(i, HIGH);
    delay(delayValue);
    digitalWrite(i, LOW);
  }
}

void reset(int min, int max) {
  int i;
  for(i = min; i <= max; i++)
    digitalWrite(i, LOW);
  
  delay(delayValue);
}

void loop() {
  valore_primo_sensore = analogRead(primo_sensore);

  if(valore_primo_sensore < lum)
    cambiaStato(5, 7);
  else
    reset(5, 7);
  
  valore_secondo_sensore = analogRead(secondo_sensore);

  if(valore_secondo_sensore < lum)
    cambiaStato(8, 10);
  else
    reset(8, 10);


  Serial.print("Primo ");
  Serial.print(valore_primo_sensore);
  Serial.print(" | Secondo ");
  Serial.println(valore_secondo_sensore);
}
