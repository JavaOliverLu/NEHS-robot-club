using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor leftmotor;
extern motor clawmotor;
extern motor armmotor;
extern controller Controller1;
extern motor rightmotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );