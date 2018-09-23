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

    PID1.setKp(5.0); /*The args should be kp value*/

    PID1.setKi(5.0); /*The args should be ki value*/

    PID1.setKd(5.0); /*The args should be kd value*/

    PID1.setSetPoint(675.0); /*The args should be setpoint value*/

    return 0;
}
