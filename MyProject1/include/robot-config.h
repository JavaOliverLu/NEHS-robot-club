using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor Motor3;
extern motor rightMotor;
extern motor leftMotor;
extern motor Motor8;
extern controller Controller1;
extern bumper BumperA;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );