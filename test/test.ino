#include <DynamixelSerial.h>

void setup(){
Dynamixel.begin(1000000,2);  // Inicialize the servo at 1Mbps and Pin Control 2
delay(1000);
}

void loop(){
  //Dynamixel.ledStatus(2, ON);
  Dynamixel.move(1, 300);  // Move the Servo radomly from 200 to 800
  //delay(3000);
  Dynamixel.move(2, 400);
  delay(500);
  Dynamixel.move(1, 580);  // Move the Servo radomly from 200 to 800
  //delay(3000);
  Dynamixel.move(2, 580);
  //delay(3000);
  //Dynamixel.ledStatus(2, OFF);
//  Dynamixel.moveSpeed(1,random(400,500),random(400,500));
//  delay(2000);
//  Dynamixel.setEndless(1,ON);
//  Dynamixel.turn(1,RIGTH,1000);
//  delay(3000);
//  Dynamixel.turn(1,LEFT,1000);
//  delay(3000);
//  Dynamixel.setEndless(1,OFF);
//  Dynamixel.ledStatus(1,ON);
//  Dynamixel.moveRW(1,512);
//  delay(1000);
//  Dynamixel.action();
//  Dynamixel.ledStatus(1,OFF);

  //Dynamixel.ledStatus(4, ON);
  Dynamixel.move(3, 400);  // Move the Servo radomly from 200 to 800
  //delay(2000);
  Dynamixel.move(4, 450);
  delay(500);
  Dynamixel.move(3, 520);  // Move the Servo radomly from 200 to 800
  //delay(2000);
  Dynamixel.move(4, 530);
  //delay(2000);
  //Dynamixel.ledStatus(4, OFF);
  
  delay(1000);


}
