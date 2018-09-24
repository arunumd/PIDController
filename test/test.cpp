/*
 *  @authors - arunumd; and zzimits
 *  @copyright, 2018 - GNU Licence
 *  @Brief - This is a googletest file for PID Controller Class
*/

#include <gtest/gtest.h>
#include <PID_Controller.hpp>


/*This test checks whether the two values are double*/
TEST(PID_Controller, zeroError) {
	PidController testController(0.1,0.1,0.1,60,0,65);
	EXPECT_DOUBLE_EQ(0, testController.calculateGain(65,10));//compares two double to expect them to be equal. calls calculate gain with a speed of 65 and a time of 10
}

/*This test checks for the sign of the gains (positive or negative)*/
TEST(PID_Controller, checkSign){
	PidController testController(0.1,0.1,0.1,60,0,65);
	EXPECT_TRUE(0<testController.calculateGain(80,10)); // Checks the sign of the gain
	EXPECT_TRUE(0>testController.calculateGain(50,10)); // Checks the sign of the gain.
}

