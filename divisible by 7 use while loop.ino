// C++ code
//divisible by 7 use while loop
void setup()
{
  Serial.begin(9600);
  int m=1;
  while(m<=500){
    if(m%7==0){Serial.println(m);}
    m++;}
}
void loop(){}