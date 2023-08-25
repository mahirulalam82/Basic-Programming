// C++ code
//Function (find largest number)
void setup()
{
Serial.begin(9600);
  int number=findlargestnumber(12,-3,-5);
  Serial.println(number);}
void loop(){}
int findlargestnumber(int a,int b,int c)
{ if(a>b && a>c){return a;}
 if (b>a && b>c){return b;}
 if(c>a && c>b){return c;}}
// void loop(){} type of function ,function name,(perameter1,...)