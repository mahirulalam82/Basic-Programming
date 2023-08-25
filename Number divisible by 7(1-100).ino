// C++ code
//number divisible by 7
void setup()
{Serial.begin(9600);
 int i=1;int count=0;
 for(int i=1;i<=100;i++)
   if(i%7==0)
 {Serial.println(i);count++;}
 Serial.print("the number of divisible by 7 are:");Serial.print(count);
}
void loop(){}