// C++ code
//positive negative problem.
void setup()
{ Serial.begin(9600);}
void loop()
{ int n=-5;
 if(n==0){Serial.println("it's zero");}
 else if(n>0){Serial.println("it's positive");}
 else  {Serial.println("it's negative");}                    
  delay(1000);                      }