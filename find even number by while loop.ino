// C++ code
//find even number by while loop
void setup()
{
  Serial.begin(9600);
  int i=0;
  while(i<=100){
    if(i%2==0)
  { Serial.println(i);}
    i++;}
}
void loop(){}