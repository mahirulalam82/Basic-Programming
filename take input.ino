//simple problem:take input
void setup()
{ Serial.begin(9600);  
}

void loop()
{
  String a=Serial.readString();
  Serial.println(a);
  delay(1000);
}