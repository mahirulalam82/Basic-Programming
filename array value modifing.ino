// C++ code
//Array value modifing
void setup()
{
  Serial.begin(9600);
  int array[5]={1,2,3,4,5};
  for(int i=0;i<5;i++)
  {Serial.println(array[i]);}
  
  for(int i=500;i<505;i++)
  { array[i-500]=i;
   Serial.println(array[i-500]);}

}
void loop(){}