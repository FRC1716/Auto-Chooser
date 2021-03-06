// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef CONTROLSS_H
#define CONTROLSS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class ControlSS: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	ControlSS();
	void InitDefaultCommand();

	//variables to store position and defense values
	int posNum;
	int defNum;
	int windowNum;

	double shooterPSI;
	double armPSI;

	bool shooterUse;
	bool armUse;

	Timer* time;

	//Relay* windowMotor;

	//BuiltInAccelerometer* builtInAccel;

	std::shared_ptr<SpeedController> leftFrontM;
	std::shared_ptr<SpeedController> leftRearM;
	std::shared_ptr<SpeedController> rightFrontM;
	std::shared_ptr<SpeedController> rightRearM;
	std::shared_ptr<RobotDrive> robotDrive;
	std::shared_ptr<AnalogInput> shooterGauge;
	std::shared_ptr<AnalogInput> armGauge;

	//create methods to control drive
	void drive(std::shared_ptr<Joystick> left, std::shared_ptr<Joystick> right);
	void stop();
	//create methods to update variable for pressure gauges
	void updateShooter();
	void updateArm();
	//create methods to control window motor
	void windowForward();
	void windowReverse();
	void windowStop();
	//create methods to set position number
	void setPos1();
	void setPos2();
	void setPos3();
	void setPos4();
	void setPos5();
	//create methods to set defense number
	void setDef1();
	void setDef2();
	void setDef3();
	void setDef4();
	void setDef5();
	void setDef6();
	void setDef7();
	void setDef8();
	void setDef9();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif
