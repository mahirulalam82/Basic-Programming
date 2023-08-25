// C++ code
//Array size
void setup()
{
Serial.begin(9600);
  int array[]={1,2,3,4,5};
  //int a=2 byte,float b=4 byte,chara c=1 byte,,1 byte =8 bit
  Serial.println(sizeof (array)/sizeof array[0]);
  //sizeof array[0] means first number of array
}
void loop(){}