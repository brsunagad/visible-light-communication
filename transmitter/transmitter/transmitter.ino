unsigned long int to_manchester(byte data){
  unsigned int i ;unsigned long int manchester_data ;
   for(i = 0 ; i < 8; i ++){
    if(data & 0x80) (manchester_data) |=  0x02  ; // data LSB first
    else (manchester_data) |= 0x01 ;
    (manchester_data) = (manchester_data) << 2 ;
    data = data << 1 ; // to next bit
  }
  return (manchester_data);
 }

  byte array3[11*4];
void setup() {
  // put your setup code here, to run once:
  Serial.begin(2400);


   char s[] = "Hello World";
     byte b[11];
     //byte x=0xFF;




     unsigned long int array[11*2];
     unsigned int array2[11*2];
    

     for(int i=0;i<11;i++){
      //Serial.println(s[i]);
      //Serial.println(s[i],BIN);
      
      
      b[i]=s[i]|0x80;
      //Serial.println(b[i],BIN);
      array[i]=to_manchester(b[i]);
      //Serial.println(array[i],BIN);
      array2[i]=array[i]>>2;
      Serial.println(array2[i],BIN);
     }

     //Serial.println();
     //Serial.println();
     Serial.println(array2[0],BIN);
     Serial.println(array2[0]>>8,BIN);
     Serial.println();
    int j=0,k=0;
//    
      while(k<22){       
        array3[k+1]=array2[j];
        array3[k]=(array2[j]>>8);
        j++;
        k=k+2;
     }

     for(int i=0;i<22;i++)
      Serial.println(array3[i],BIN);
      
     Serial.write(array3,22);
     //Serial.println(sizeof(s[0]));
    //for(int i=0;i<11;i++){
//      
//}
     /* byte arr[]="Hello World";
    Serial.write(arr,11);
    for(int i=0;i<11;i++){
    Serial.println(arr[i], BIN);
    b[i]=s[i]|0x80;
    Serial.println(b[i],BIN);*/
}

void loop() {
  // put your main code here, to run repeatedly:
//Serial.write(array3,22);

 
}
