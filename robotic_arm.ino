#include<Servo.h>
Servo s0,s1,s2,s3;
int p0,p1,p2,p3;

void setup()
{
  s0.attach(6);
  s1.attach(9);
  s2.attach(10);
  s3.attach(11);
  Serial.begin(9600);
}

void loop()
{
  p0=analogRead(A0);
  p0=map(p0,0,1023,0,180);
  Serial.println(p0);
  s0.write(p0);
  delay(5);

  p1=analogRead(A1);
  p1=map(p1,0,1023,0,180);
  Serial.println(p1);
  s1.write(p1);
  delay(5);

  p2=analogRead(A2);
  p2=map(p2,0,1023,0,180);
  Serial.println(p1);
  s2.write(p2);
  delay(5);

  p3=analogRead(A3);
  Serial.println(p3);
  p3=map(p3,0,1023,0,180);
  s3.write(p3);
  delay(5); 

}
