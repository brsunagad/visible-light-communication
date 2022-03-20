  byte s, a1[22];
  unsigned long int a2[11];

byte to_manchester(unsigned long int data){
  int i ;
  byte manchester_data=0;
  //unsigned long int manchester_data ;
   for(i = 0 ; i < 8; i ++){
    if((data & 0x8000)) 
      (manchester_data) |=  0x01 ; // data LSB first
   //else (manchester_data) |= 0x00 ;
    (manchester_data) = (manchester_data) << 1 ;
    data = data << 2 ; // to next bit
  }
  //Serial.println(manchester_data);
  //manchester_data &= 0x7F;
  return (manchester_data);
 }

void setup() {
  // put your setup code here, to run once:
  Serial.begin(2400);
 
}

void loop() {
  // put your main code here, to run repeatedly
 int i=0;
  while (Serial.available()) {
    s = Serial.read();
    a1[i]=s;
    Serial.println(a1[i],BIN);
//    a2[i]=a1[i];
 //   Serial.println(a2[i],BIN);
    i++;
  }
//Serial.println(i);
delay(100);
if(i==22){
  int p=0,q=0;
  while(q<11){
    a2[q]=a1[p];
    a2[q]=a2[q]<<8;
    p++;
    a2[q]|=a1[p];
    p++;
    Serial.println(a2[q],BIN);
    q++;
  }



   byte received_data[11];
   for(int j=0;j<11;j++){
   received_data[j]=to_manchester(a2[j]);
   Serial.println(received_data[j],BIN);

}
}
}
