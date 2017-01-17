int redLed = 3;
int greenLed = 5;
int blueLed = 6;
int randRed;
int randGreen;
int randBlue;


void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, HIGH);
  digitalWrite(blueLed, HIGH);
}

void loop()
{
  randRed = random(255);
  randGreen = random(255);
  randBlue = random(255);
  
  analogWrite(redLed, randRed);
  analogWrite(greenLed, randGreen);
  analogWrite(blueLed, randBlue);
  
  delay(1000);
}  
