
#define inSensor 2
#define outSensor 3

int LED = 6; // conect Led to arduino pin 6
int inStatus;
int outStatus;
 
int countin = 0;
int countout = 0;
 
int in;
int out;
int now;
 
 
void setup()
{
  Serial.begin(9600);               // Initialise the serial monitor
  pinMode(inSensor, INPUT);
  pinMode(outSensor, INPUT);
}
 
void loop()
{
  inStatus =  digitalRead(inSensor);
  outStatus = digitalRead(outSensor);
  if (inStatus == 0){
    in = countin++;
  }
  if (outStatus == 0){
    out = countout++;
  }
  now = in - out;

  Serial.print("The number of visitors in the room ");
  Serial.println(now);           // Show the value in the serial monitor
  
  if (now <= 0)
  {
    digitalWrite(LED, LOW); // LED LOW 
    delay(5000);
  }
  else
  {
    digitalWrite(LED, HIGH); // LED High 
    delay(5000);
  }
}
