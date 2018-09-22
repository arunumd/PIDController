/*
 *  @authors - arunumd; and zzimits
 *  @copyright, 2018 - GNU Licence
 *  @Brief - This is the definitions file for PIDController class
*/

#include <iostream>
#include <PID_Controller.hpp>

int main()
{
    PidController PID1 (5.0, 5.0, 5.0, 500.0, 17.0, 675.0); /*Instantiation of PIDController type object*/

    PID1.setKp(/*kp value*/);

    PID1.setKi(/*Ki value*/);

    PID1.setKd(/*Kd value*/);

    PID1.setSetPoint(/*SetPoint value*/);

    return 0;
}
