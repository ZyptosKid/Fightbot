  int mr1=2;
  int mr2=3;
  int ml1=4;
  int ml2=5;
  int signl=0 , order=0;



void setup() {
  pinMode(mr1,OUTPUT);
  pinMode(mr2,OUTPUT);
  pinMode(ml1,OUTPUT);
  pinMode(ml2,OUTPUT);
  Serial.begin(9600);
}


void loop() {

  signl = Serial.available();

  if( signl > 0 ){

      order = Serial.read();

        switch(order){

          case 0 : stoop(); break;
          case 1 : forward(); break;
          case 2 : back(); break;
          case 3 : right(); break;
          case 4 : left(); break;
          
          
          }
    
    
    }



  
}

void forward(){
  digitalWrite(mr1,1);
  digitalWrite(mr2,0);

  digitalWrite(ml1,1);
  digitalWrite(ml2,0);
 }



 
void back(){
  digitalWrite(mr1,0);
  digitalWrite(mr2,1);

  digitalWrite(ml1,0);
  digitalWrite(ml2,1);
 }



 
void right(){
  digitalWrite(mr1,0);
  digitalWrite(mr2,0);

  digitalWrite(ml1,1);
  digitalWrite(ml2,0);
 }



 
void left(){
  digitalWrite(mr1,1);
  digitalWrite(mr2,0);

  digitalWrite(ml1,0);
  digitalWrite(ml2,0);
 }


 
void stoop(){
  digitalWrite(mr1,0);
  digitalWrite(mr2,0);

  digitalWrite(ml1,0);
  digitalWrite(ml2,0);
 }
