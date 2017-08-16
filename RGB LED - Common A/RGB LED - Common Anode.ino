#define redPin 6
#define greenPin 5
#define bluePin 3

void setup() 
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() 
{
  setColor(255, 255, 255);
}

void setColor(int red, int green, int blue) 
{
  analogWrite(redPin, 255 - red);
  analogWrite(greenPin, 255 - green);
  analogWrite(bluePin, 255 - blue);  
}
