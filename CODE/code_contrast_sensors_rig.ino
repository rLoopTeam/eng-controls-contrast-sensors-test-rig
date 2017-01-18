#include <Time.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#define PinInt1 14

volatile int t = 0;
volatile int time1 = 0;
volatile int time2 = 0;
volatile char flag = 0;
double vt = 0; // tangential velocity [m/s]
double ls = 0.1016; //stripe length [m]
double vr = 0; //radial velocity [RPM]
double r = 0.244; //offset of from the edge
double ts = 0;
double va = 0; // angular velocity [rad/s]

void setup()
{
Serial.begin(115200);
pinMode(PinInt1, INPUT); // sets the digital pin as input
attachInterrupt(PinInt1, isrService1, RISING); // interrrupt 1 is data ready

}
void isrService1()
{
cli();
time1 = micros();
flag = 1;
detachInterrupt(PinInt1);
attachInterrupt(PinInt1, isrService2, FALLING);
sei();
}
void isrService2()
{
cli();
time2 = micros();       
flag = 2;
detachInterrupt(PinInt1);
attachInterrupt(PinInt1, isrService1, RISING);
sei();
}
void loop()
{ 
  
 if (flag != 0)
 {
         if (flag == 2) 
          {
             ts = (time2 - time1);
             ts = ts/1000000;
             vt=ls/(ts);
             va=vt/r;
             vr=(vt*9.549296)/r;
             Serial.print("vt = ");
             Serial.print(vt, DEC);
             Serial.print(" [m/s]");
             Serial.print("\t");
             Serial.print("vr = ");
             Serial.print(vr, DEC);
             Serial.print(" [RPM]");
             Serial.print("\t");
             Serial.print("ts = ");
             Serial.print(ts, DEC);
             Serial.print(" [s]");
             
             Serial.println();
          }
flag = 0;
  }

}
