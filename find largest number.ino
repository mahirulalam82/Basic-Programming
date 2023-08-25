// C++ code
// find largest number.
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0){
    int a=14;
    int b=15;
   if(a>b)
   {Serial.println("a is the largest number");}
    else{Serial.println("b is the largest number");}}
delay(1000);}