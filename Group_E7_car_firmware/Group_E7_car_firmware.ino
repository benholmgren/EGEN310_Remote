
//*** Group E7 controls using arduino motor shield and HC-05 Bluetooth module
//
#include <AFMotor.h>

//Generate an object for each motor (one for each wheel in car)

//left motors
AF_DCMotor motor1(1); 
AF_DCMotor motor4(4);

//right motors
AF_DCMotor motor2(2); 
AF_DCMotor motor2(3); 
 


char command; 

void setup() 
{       
  Serial.begin(9600);  //Set the baud rate to your Bluetooth module.
}

void loop(){
  if(Serial.available() > 0){ 
    command = Serial.read(); 
    //Begin with motors not moving
    Stop();
    //Change pin mode only if new command is different from previous.   
    //Serial.println(command);
    switch(command){
    case 'F':  
      forward();
      break;
    case 'B':  
       back();
      break;
    case 'L':  
      left();
      break;
    case 'R':
      right();
      break;
    }
  } 
}

void forward()
{
  motor1.setSpeed(255); //Define maximum velocity
  motor1.run(FORWARD); //rotate the motor clockwise
  motor2.setSpeed(255); //Define maximum velocity
  motor2.run(FORWARD); //rotate the motor clockwise
  motor2.setSpeed(255); //Define maximum velocity
  motor2.run(FORWARD); //rotate the motor clockwise
  motor4.setSpeed(255); //Define maximum velocity
  motor4.run(FORWARD); //rotate the motor clockwise
}

void back()
{
  //reverse all motors
  motor1.setSpeed(255); 
  motor1.run(BACKWARD); 
  motor2.setSpeed(255); 
  motor2.run(BACKWARD); 
  motor2.setSpeed(255); 
  motor2.run(BACKWARD); 
  motor4.setSpeed(255); 
  motor4.run(BACKWARD); e
}

void left()
{
  //Turn on right motors
  motor2.setSpeed(255); //set speed of motor 2 to full
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD); // go forward with motor 3 at full speed

  //Turn off left motors
  motor1.setSpeed(0); // set speed = 0 for motor 1 
  motor1.run(RELEASE); 
  motor4.setSpeed(0);
  motor4.run(RELEASE); // set speed = 0 for motor 4
}

void right()
{
  //Turn on left motors
  motor1.setSpeed(255); //set speed of motor 1 to full
  motor1.run(FORWARD);
  motor4.setSpeed(255);
  motor4.run(FORWARD); // go forward with motor 4 at full speed

  //Turn off right motors
  motor2.setSpeed(0); // set speed = 0 for motor 2 
  motor2.run(RELEASE); 
  motor3.setSpeed(0);
  motor3.run(RELEASE); // set speed = 0 for motor 3
}
}

void Stop()
{
  motor1.setSpeed(0);
  motor1.run(RELEASE); //turn //motor1 off
  motor2.setSpeed(0);
  motor2.run(RELEASE); //turn //motor2 off
  motor2.setSpeed(0);
  motor2.run(RELEASE); //turn //motor1 off
  motor4.setSpeed(0);
  motor4.run(RELEASE); //turn //motor2 off
  
}
