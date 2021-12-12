/*project by Manish kumar yadav*/
#include<Servo.h>
Servo servo1;
Servo servo2;

long StartTime = 0;
const long interval = 20000;


void setup() {
  servo1.attach(3);
  servo2.attach(5);
}


void loop()
{
  unsigned long CheckTime = millis();

  unsigned long elapsedTime = CheckTime - StartTime;

  if(elapsedTime > interval) {

  StartTime = CheckTime;   

  }

  if (elapsedTime < 4200){

  servo1.write(180);             
  servo2.write(0);    

  }

  if (elapsedTime > 4200){

  servo1.write(90);             
  servo2.write(90);   

  }

}
