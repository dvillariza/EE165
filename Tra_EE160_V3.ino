char message[13];
char test;
byte bet[2];
String con;
int x;
/// not included
struct DHT_11_H_T{
  char ret[3];
  float D_Temp;
  float D_Hum;
  float LM_Temp;
} dht_sensor;
//
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  message[12] = '\0';
}

void loop() {
  x = sizeof(dht_sensor);
  Serial.println(x);
  delay(10000);
  if (Serial.available()){
    bet[0] = Serial.read();
    
    if ((bet[0] & B10000000)== B10000000){
      delay(10);
      if (Serial.available()){
        bet[1] = Serial.read();
        //Serial.println(bet[0],BIN);
        //Serial.println(bet[1],BIN);
       }
       
      }
    if ((bet[0] & B00000001)== B00000001){ 
      message[0] = 'X';
    }
    else{
      message[0] = 'O';
    }
    if ((bet[0] & B00000010)== B00000010){ 
      message[1] = 'X';
    }
    else{
      message[1] = 'O';
    }
    if ((bet[0] & B00000100)== B00000100){ 
      message[2] = 'X';
    }
    else{
      message[2] = 'O';
    }
    if ((bet[0] & B00001000)== B00001000){ 
      message[3] = 'X';
    }
    else{
      message[3] = 'O';
    }
    if ((bet[0] & B00010000)== B00010000){ 
      message[4] = 'X';
    }
    else{
      message[4] = 'O';
    }
    if ((bet[0] & B00100000)== B00100000){ 
      message[5] = 'X';
    }
    else{
      message[5] = 'O';
    }
    if ((bet[0] & B01000000)== B01000000){ 
      message[6] = 'X';
    }
    else{
      message[6] = 'O';
    }
    if ((bet[1] & B00000001)== B00000001){ 
      message[7] = 'X';
    }
    else{
      message[7] = 'O';
    }
    if ((bet[1] & B00000010)== B00000010){ 
      message[8] = 'X';
    }
    else{
      message[8] = 'O';
    }
    if ((bet[1] & B00000100)== B00000100){ 
      message[9] = 'X';
    }
    else{
      message[9] = 'O';
    }
    if ((bet[1] & B00001000)== B00001000){ 
      message[10] = 'X';
    }
    else{
      message[10] = 'O';
    }
    if ((bet[1] & B00010000)== B00010000){ 
      message[11] = 'X';
    }
    else{
      message[11] = 'O';
    }
    Serial.println(message);
    }
    /*
    while (Serial.avaaailable()){
      bet[x] = Serial.read();
      x++;
      delay(10);
    }
    Serial.println(sizeof(bet));
    Serial.print("High");
    Serial.prinssssstln(bet[0],BIN);
    Serial.print("Low");
    Serial.println(bet[1],BIN);
  }
  */
  
}

