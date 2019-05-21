char message[10];
char test;
byte bet,teb;
String con;
int x;
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
  pinMode(13,INPUT);
  bet = bet | B10000000;
}

void loop() {
  if(digitalRead(2)==HIGH){ bet = bet|B00000001;}
  else                    { bet = bet&B11111110;}     
  if(digitalRead(3)==HIGH){ bet = bet|B00000010;}
  else                    { bet = bet&B11111101;}   
  if(digitalRead(4)==HIGH){ bet = bet|B00000100;}
  else                    { bet = bet&B11111011;}   
  if(digitalRead(5)==HIGH){ bet = bet|B00001000;}
  else                    { bet = bet&B11110111;}   
  if(digitalRead(6)==HIGH){ bet = bet|B00010000;}
  else                    { bet = bet&B11101111;}   
  if(digitalRead(7)==HIGH){ bet = bet|B00100000;}
  else                    { bet = bet&B11011111;}   
  if(digitalRead(8)==HIGH){ bet = bet|B01000000;}
  else                    { bet = bet&B10111111;}   
  if(digitalRead(9)==HIGH){ teb = teb|B00000001;}
  else                    { teb = teb&B11111110;}  
  if(digitalRead(10)==HIGH){ teb = teb|B00000010;}
  else                    { teb = teb&B11111101;} 
  if(digitalRead(11)==HIGH){ teb = teb|B00000100;}
  else                    { teb = teb&B11111011;}   
  if(digitalRead(12)==HIGH){ teb = teb|B00001000;}
  else                    { teb = teb&B11110111;}   
  if(digitalRead(13)==HIGH){ teb = teb|B00010000;}
  else                    { teb = teb&B11101111;}            
  //bet = B11100111;
  //teb = B00001001;
  /*
  if ((teb & B10000000)== B10000000){
    Serial.println("Good");
  }
  else{
    Serial.println("Bad");
  }
  */

  //
  /*
  Serial.print("First Byte");
  Serial.println(bet,BIN);
  Serial.print("Second Byte");
  Serial.println(teb,BIN);
  */
  //
  Serial.write(bet);
  //delay(10); not needed
  Serial.write(teb);
  delay(200);
  
}

