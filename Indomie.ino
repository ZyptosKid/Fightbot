  int mr1=2;
  int mr2=3;
  int ml1=4;
  int ml2=5;
  int order = 0;


void setup() {
  pinMode(mr1,OUTPUT);
  pinMode(mr2,OUTPUT);
  pinMode(ml1,OUTPUT);
  pinMode(ml2,OUTPUT);

  Serial.begin(9600);

}


void loop() {

  order=0;

  
  if( Serial.available() > 0 ){

    order= Serial.read();
    if(order== '0')     breek();  
    if(order== '1')     forward();  
    if(order== '4')     right();  
    if(order== '3')     left();  
    if(order== '2')     back();  
    
    
    }
  

  
}

void breek(){
  digitalWrite(mr1,0);
  digitalWrite(mr2,0);

  digitalWrite(ml1,0);
  digitalWrite(ml2,0);
 }



 
void forward(){
  digitalWrite(mr1,1);
  digitalWrite(mr2,0);

  digitalWrite(ml1,1);
  digitalWrite(ml2,0);
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


 
void back(){
  digitalWrite(mr1,0);
  digitalWrite(mr2,1);

  digitalWrite(ml1,0);
  digitalWrite(ml2,1);
 }



