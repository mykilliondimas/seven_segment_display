// C++ code
//
int pin13=13;
int pin12=12;
int pin11=11;
int pin10=10;
int pin9=9;
int pin8=8;
int pin7=7;
int a,b,c,d,e,f,g;
void setup()
{
  pinMode(pin13, OUTPUT);
  pinMode(pin12, OUTPUT);
  pinMode(pin11, OUTPUT);
  pinMode(pin10, OUTPUT);
  pinMode(pin9, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pin7, OUTPUT);
}
void digits(int a,int b,int c,int d,int e,int f,int g){
  digitalWrite(pin13,a);
  digitalWrite(pin12,b);
  digitalWrite(pin11,c);
  digitalWrite(pin10,d);
  digitalWrite(pin9,e);
  digitalWrite(pin8,f);
  digitalWrite(pin7,g);
  delay(1000);
}

void loop()
{
  //0
  digits(1,1,0,1,1,1,1);
  //1
  digits(0,0,0,0,0,1,1);
  //2
  digits(1,0,1,1,1,0,1);
  //3
  digits(1,0,1,0,1,1,1);
  //4
  digits(0,1,1,0,0,1,1);
  //5
  digits(1,1,1,0,1,1,0);
  //6
  digits(1,1,1,1,1,1,0);
  //7
  digits(1,0,0,0,0,1,1);
  //8
  digits(1,1,1,1,1,1,1);
  //9
  digits(1,1,1,0,1,1,1);
  //G
  digits(1,1,1,1,1,1,0);
  //R
  digits(1,1,1,1,0,1,1); 
  //O
  digits(1,1,0,1,1,1,1);
  //U
  digits(0,1,0,1,1,1,1);
  //P
  digits(1,1,1,1,0,0,1);
  //4
  digits(0,1,1,0,0,1,1);
}
