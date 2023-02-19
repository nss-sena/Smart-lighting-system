
int ldrPin = A0;                    // LDR pin
int ldrVal = 0;                     // Value of LDR
int ledPin = 6;                     // Build in LED pin
int bri;

void setup() {
  Serial.begin(9600);               // Initialise the serial monitor
  pinMode(A0,INPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  
  ldrVal = analogRead(ldrPin);      // Read the analog value of the LDR
  Serial.println(ldrVal);           // Show the value in the serial monitor

 if (ldrVal <500) {                 // If the LDR value is lower than 200
  bri=map(ldrVal,0,500,255,0);     // Turn buildin LED on according to the brightness
  analogWrite(ledPin,bri);
  delay(100);                       // Pause 100ms
  
 }else {
   digitalWrite(ledPin, LOW);       // Turn buildin LED off
  }


  
  delay(100);                       // Pause 100ms
  
}
