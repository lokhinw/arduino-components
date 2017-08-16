const int inX = A0;
const int inY = A1;
const int inPressed = 2;
 
int xValue = 0; 
int yValue = 0;
int notPressed = 0;
 
void setup() 
{
 
  pinMode(inX, INPUT); 
  pinMode(inY, INPUT); 
  pinMode(inPressed, INPUT_PULLUP); 
   
  Serial.begin(9600);
}
 
void loop() 
{
  xValue = analogRead(inX); 
  yValue = analogRead(inY); 
  notPressed = digitalRead(inPressed);
 
  Serial.print("X: ");
  Serial.println(xValue);
  Serial.print("Y: ");
  Serial.println(yValue);
  Serial.print("Not pressed: ");
  Serial.println(notPressed);
  
  delay(1000);
}
