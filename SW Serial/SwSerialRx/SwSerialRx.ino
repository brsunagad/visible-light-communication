#include <SoftwareSerial.h>
#define rx 2
#define tx 3

SoftwareSerial XSERIAL =  SoftwareSerial(rx, tx, false);

void setup()  
{
   XSERIAL.begin(9600);

   Serial.begin(9600);

   Serial.println("Message...");
}

void loop() 
{
  while(XSERIAL.available()>0){
    byte c=XSERIAL.read();
   // if (c== 0b10101010);
    //else {
      char ch =c;
      Serial.print(ch);
    //}
  }
  
}
