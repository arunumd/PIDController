/*
 *  @authors - arunumd; and zzimits
 *  @copyright, 2018 - GNU Licence
 *  @Brief - This file contains the definitions file for
 *           the PIDController class
*/

#include<iostream>
#include<PID_Controller.hpp>

double PidController::calculateGain(const double currentSpeed,
                                    const double currentTime) {
	/**
   *  Calculates the gain. Starts by calculating error then
   *  uses that to find the derivative and integral of error.
   *  Multiplying those by their respective gains and summing
   *  them results in the controller gain that is returned.
	 */
  double error = currentSpeed - setPoint;
  double dt = currentTime - previousTime;
  double _kp = kp * error;
  double _kd = (error - previousError) / dt;
  sumOfErrors = sumOfErrors + error;
  double _ki = sumOfErrors * dt;
  gain = _kp + _kd + _ki;
  return gain;
}

/*
void PidController::setKp(const double kp) {

 // Updates the proportional gain

  this->kp = kp;
}

void PidController::setKi(const double ki) {

 // Updates the integral gain
  this->ki = ki;
}

void PidController::setKd(const double kd) {

 // Updates the derivative gain

  this->kd = kd;
}

void PidController::setSetPoint(const double setPoint) {

 //  Updates the setPoint

  this->setPoint = setPoint;
}
 */
