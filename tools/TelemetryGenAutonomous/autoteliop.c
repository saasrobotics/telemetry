#pragma config(Sensor, S1,     ,               sensorI2CCustom)
#pragma config(Sensor, S2,     ,               sensorI2CCustom)
#pragma config(Sensor, S3,     ,               sensorI2CCustom)
#pragma config(Sensor, S4,     ,               sensorI2CCustom)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/* note: INSP* is notation for the Python script that generates the final version of this file. all instances will be replaced. */

#include "../../../Robotics2013-14/libraries/I2C.h"

const int DATA_ARRAY_SIZE = /*INSPA*/;

const int motor1MotorData[DATA_ARRAY_SIZE] = /*INSPB*/;
const int motor2MotorData[DATA_ARRAY_SIZE] = /*INSPC*/;
const int motor3MotorData[DATA_ARRAY_SIZE] = /*INSPD*/;
const int motor4MotorData[DATA_ARRAY_SIZE] = /*INSPE*/;
const int motor5MotorData[DATA_ARRAY_SIZE] = /*INSPF*/;
const int motor6MotorData[DATA_ARRAY_SIZE] = /*INSPG*/;

task main()
{

	for (int i = 0; i < DATA_ARRAY_SIZE-1; i++)
	{
		/*
			note: the daisychain/motor number to telemetry motor mapping is defined arbitrarily, and is
			not stored in an external data structure like the encoder counts are.
			motors map correctly due to the fact that the association is kept in sync betwen the data collection
			program and this one.
		*/
		I2C_SetMotorSpeed(S1, 1, 1, motor1MotorData[i]);
		I2C_SetMotorSpeed(S1, 1, 2, motor2MotorData[i]);
		I2C_SetMotorSpeed(S1, 2, 1, motor3MotorData[i]);
		I2C_SetMotorSpeed(S1, 2, 2, motor4MotorData[i]);
		I2C_SetMotorSpeed(S1, 3, 1, motor5MotorData[i]);
		I2C_SetMotorSpeed(S1, 3, 2, motor6MotorData[i]);
		// match the sampling rate of the original telemetry program
		Sleep(50);
	}

}
