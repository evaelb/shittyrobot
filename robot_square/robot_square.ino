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
//go forward
  if (elapsedTime < 3000){

  servo1.write(180);             
  servo2.write(0);    

  }
// First turn left
  if (elapsedTime > 3000 &elapsedTime < 3700 ){

  servo1.write(90);             
  servo2.write(0);   

  }
//go forward
  if (elapsedTime > 3700 &elapsedTime < 6600 ){

  servo1.write(180);             
  servo2.write(0);   

  }
//second turn left
   if (elapsedTime > 6600 &elapsedTime < 7300 ){

  servo1.write(90);             
  servo2.write(0);   

  }
//fo forward
  if (elapsedTime > 7300 &elapsedTime < 10200 ){

  servo1.write(180);             
  servo2.write(0);   

  }

  //third turn left
   if (elapsedTime > 10200 &elapsedTime < 10900 ){

  servo1.write(90);             
  servo2.write(0);   

  }

  //fo forward
  if (elapsedTime > 10900 &elapsedTime < 13800 ){

  servo1.write(180);             
  servo2.write(0);   

  }

  if (elapsedTime > 13800){

  servo1.write(90);             
  servo2.write(90);    

  }

}
