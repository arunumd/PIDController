/*
 *  @authors - arunumd; and zzimits
 *  @copyright, 2018 - GNU Licence
 *  @Brief - This file contains the definitions file for the PIDController class
*/

#include<iostream>
#include<PID_Controller.hpp>

double PidController::calculateGain(const double currentSpeed,const double currentTime){
	/**
	 *  Calculates the gain. Starts by calculating error then uses that to find the derivative and integral of error.
	 *  Multiplying those by their respective gains and summing them results in the controller gain that is returned.
	 */
	return gain;
}

void PidController::setKp(const double kp){
	/**
	 *  Updates the proportional gain
	 */
}
void PidController::setKi(const double ki){
	/**
		 *  Updates the integral gain
		 */
}
void PidController::setKd(const double kd){
	/**
	 *  Updates the derivative gain
	 */
}
void PidController::setSetPoint(const double setPoint){
	/**
	 *  Updates the setPoint
	 */
}
