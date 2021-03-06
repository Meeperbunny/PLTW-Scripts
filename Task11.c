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

//Task 01, Ian Mckibben, 5/9

task main()
{
	clearTimer(T1);
	while (time1[T1] < 30000) {
		untilBump(button, 0);
		turnLEDOn(LED);
		wait(2);
		startMotor(leftMotor, 50);
		untilBump(limitSwitch, 0);
		stopMotor(leftMotor);
		startMotor(rightMotor, 50);
		untilBump(button, 0);
		stopMotor(rightMotor);
		startMotor(leftMotor, 50);
	}
	stopMotor(leftMotor);
	turnLEDOff(LED);
	wait(1);
	turnLEDOn(LED);
	wait(3);
	turnLEDOff(LED);
}
