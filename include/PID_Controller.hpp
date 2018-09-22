/*
 *  @authors - arunumd; and zzimits
 *  @copyright, 2018 - GNU Licence
 *  @Brief - This is the header file for PIDController class
*/

#pragma once

#include<iostream>


/**
 *  A PID Controller. Calculates the controller gain in relation to a reference velocity.
 */
class PidController
{
private:
	double kp = 1;  /**<proportional gain */
	double ki = 1;  /**<integral gain */
	double kd = 1;  /**<derivative gain */
	double previousTime = 0;  /**< Time at the last call */
	double previousError = 0;  /**<Error calculated at the last call */
	double currentSpeed = 0;  /**<Speed passed in by the user */
	double currentTime =0;  /**<Time passed in by the user */
	double setPoint = 65;  /**<Reference Speed */
	double gain = 1;  /**<The calculated controller output */
public:
	/*Default constructor for class PidController*/
	PidController(double Param_kp, double Param_ki, double Param_kd, \
		          double default_currentSpeed, double default_currentTime, double default_desiredSpeed): {
		kp = Param_kp; /*Set the initial kp from args*/
		ki = Param_ki; /*Set the initial ki from args*/
		kd = Param_kd; /*Set the initial kd from args*/
		currentSpeed = default_currentSpeed; /*Set the currentSpeed from args*/
		currentTime = default_currentTime; /*Set the currentTime from args*/
		gain = default_desiredSpeed; /*Set the gain from args*/
	}

	~PidController(); /*Default destructor for PidController class*/

	double calculateGain(const double currentSpeed, const double currentTime);/**Calculate controller gain*/
	void setKp(const double kp); /**Updates kp value*/
	void setKi(const double ki); /**Updates ki value*/
	void setKd(const double kd); /**Updates kd value*/
	void setSetPoint(const double setPoint); /**Updates setPoint*/
};