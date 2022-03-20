#include <SoftwareSerial.h>

#define rx 3  
#define tx 2  

SoftwareSerial XSERIAL =  SoftwareSerial(rx, tx);

void setup()  
{
     XSERIAL.begin(9600);
     Serial.begin(9600);
}

void loop() 
{ 
     if(Serial.available()==0){
      XSERIAL.write(0b10101010);
      //Serial.write(0b10101010);
      XSERIAL.flush();
     }
    else{
      XSERIAL.flush();
      while(Serial.available()>0){
         XSERIAL.write(Serial.read());
      }
      
    }
}
