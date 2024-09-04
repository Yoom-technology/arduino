
int  red = 12 ;
int  blue = 13 ;
int  green = 7 ;
int i =    0  ;
int t =    0  ;
int button =    2;
void setup() {
  // put your setup code here, to run once:
pinMode (red , OUTPUT);
pinMode (blue , OUTPUT);
pinMode (green , OUTPUT);
}

void loop() {

  while(i<11){

  digitalWrite (red , HIGH) ;
  delay(1111);
  digitalWrite (red , LOW) ;
  delay(1111);
  digitalWrite (blue , HIGH) ;
  delay(1111);
  digitalWrite (blue , LOW) ;
  delay(1111);
  digitalWrite (green , HIGH) ;
  delay(1111);
  digitalWrite (green , LOW) ;
  delay(1111);
 
  // put your main code here, to run repeatedly:

   i++;
  
  // put your main code here, to run repeatedly:

  }
}
