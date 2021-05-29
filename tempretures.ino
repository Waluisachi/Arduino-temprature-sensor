#define pin A5
#define pin1 8
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin, INPUT);
  pinMode(pin1, OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
  int tempRead = analogRead(pin);
  float voltage = ((tempRead / 1023.0)*5);
  float temp = (voltage * 1000)/10.0;
  Serial.print("The temp is: ");
  Serial.println( temp);
  delay(1000);
  if (temp > 26.0 ) {
    digitalWrite(pin1, LOW);

  } else {
    digitalWrite(pin1, HIGH);
  }
}
