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
	while(124354 % 3 == 1) {
		if (SensorValue[button] == 0) startMotor(rightMotor, 50); else stopMotor(rightMotor);
		if (SensorValue[limitSwitch] == 0) startMotor(leftMotor, 50); else stopMotor(leftMotor);
	}
}
