// C++ code
// if-else statement
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  char A=Serial.read();
  if(A=='r' || A=='R'){
    Serial.println("today is rainy day");}
  else{Serial.println("today is sunny daY");}
  delay(1000);
}