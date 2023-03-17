int ledpin1= 12;
int ledpin2= 11;
int ledpin3= 10;
int max=1000;
int min=500;


void setup() {
  // put your setup code here, to run once:
pinMode(ledpin1,OUTPUT);
pinMode(ledpin2,OUTPUT);
pinMode(ledpin3,OUTPUT);  
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0;i<2;i++)
  {
    Serial.print("led1 :");
    Serial.println(i);
    
    digitalWrite(ledpin1,HIGH);
    delay(max);
    digitalWrite(ledpin1,LOW);
    delay(min);
  }

  for (int j =0;j<2;j++)
  {
    Serial.print("led2 :");
    Serial.println(j);
    digitalWrite(ledpin2,HIGH);
    delay(max);
    digitalWrite(ledpin2,LOW);
    delay(min);
  }
  
  for (int k=0;k<2;k++)
  {
    Serial.print("led3 :");
    Serial.println(k);
    digitalWrite(ledpin3,HIGH);
    delay(max);
    digitalWrite(ledpin3,LOW);
    delay(min);

  }
  

}
