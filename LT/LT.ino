#define s1 13
#define s2 12
#define s3 11
#define in1 3
#define in2 4
#define in3 5
#define in4 6
#define pwm1 9
#define pwm2 10

int d1,d2,d3;


void setup() {
  Serial.begin(9600);
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(s3,INPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  analogWrite(pwm1, 150); 
  analogWrite(pwm2, 150); 
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  d1=digitalRead(s1);
  d2=digitalRead(s2);
  d3=digitalRead(s3);

Serial.print("s1: ");
Serial.print(d1);
Serial.print("| s2: ");
Serial.print(d2);
Serial.print("| s3: ");
Serial.println(d3);
  if((d1==1)&&(d2==0)&&(d3==1)){maju(); Serial.println("maju");} 
  if((d1==0)&&(d2==0)&&(d3==1)){kiri();Serial.println("kiri");}
  if((d1==0)&&(d2==1)&&(d3==1)){kiri();Serial.println("kiri");}
  if((d1==1)&&(d2==0)&&(d3==0)){kanan();Serial.println("kanan");}
  if ((d1==1)&&(d2==1)&&(d3==0)){kanan();Serial.println("kanan");}
  if ((d1==1)&&(d2==1)&&(d3==1)){berhenti();Serial.println("berhenti");}
}
void maju()
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  }
void kiri()
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  }
void kanan()
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW); 
  }
void berhenti()
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  }
