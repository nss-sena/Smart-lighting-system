int ldr;
int bri;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ldr = analogRead(A0);
  bri = map(ldr, 0, 1023, 0, 255);

  analogWrite(13, bri);
}
