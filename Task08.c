#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorNone)
#pragma config(Sensor, dgtl2,  button,         sensorNone)
#pragma config(Sensor, dgtl3,  rotaryEncoder,  sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  ultraSound,     sensorSONAR_inch)
#pragma config(Sensor, dgtl12, LED,            sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servo,         tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//Task 01, Ian Mckibben

task main()
{
	startMotor(leftMotor, 50);
	wait(2);
	stopMotor(leftMotor);
	startMotor(rightMotor, 50);
	wait(2);
	stopMotor(rightMotor);
	turnLEDOn(LED);
	wait(3);
	turnLEDOff(LED);
	startMotor(leftMotor, 50);
	wait(2);
	stopMotor(leftMotor);
	startMotor(rightMotor, 50);
	wait(2);
	stopMotor(rightMotor);
	turnLEDOn(LED);
	wait(3);
	turnLEDOff(LED);
	startMotor(leftMotor, 50);
	wait(2);
	stopMotor(leftMotor);
	startMotor(rightMotor, 50);
	wait(2);
	stopMotor(rightMotor);
	turnLEDOn(LED);
	wait(2);
	turnLEDOff(LED); //2(3) + 7(2) = 20
}
