// C++ code
// Leap Year.
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0){
  int Year=2020;
    if(Year%400==0){Serial.println("year is a Leap Year");}
    if(Year%100!=0 && Year%4==0){Serial.println("Year is Leap Year");}
    else{Serial.println("Year isn't Leap Year");}}
delay(1000);}
