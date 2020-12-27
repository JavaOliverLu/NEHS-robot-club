

#include "vex.h"
#include <cmath>

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor3               motor         3               
// rightMotor           motor         10              
// leftMotor            motor         1               
// Motor8               motor         8               
// Controller1          controller                    
// BumperA              bumper        A               
// ---- END VEXCODE CONFIGURED DEVICES ----

using namespace vex;
// double m_quickStopAccumulator = 0, leftout, rightout;

int main() {

  vexcodeInit();
  // Controller1.ButtonL1.released(armMotorForward); 
  // uint32_t i = 0;
  // int sleep = 0;
  bool reverse = true;
  while(1){
    int left = Controller1.Axis2.position(percent) + Controller1.Axis1.position(percent) 
                  + Controller1.Axis3.position(percent) + Controller1.Axis4.position(percent);
    int right = Controller1.Axis2.position(percent) - Controller1.Axis1.position(percent) 
                  + Controller1.Axis3.position(percent) - Controller1.Axis4.position(percent);
    
    leftMotor.spin(forward, left * 0.8, pct);
    rightMotor.spin(forward, right * 0.8, pct);
    
    //limitSwitch
    if(Controller1.ButtonL2.pressing()){
      while(reverse){
        leftMotor.spin(forward, -80, pct);
        rightMotor.spin(forward, -80, pct);
        if(BumperA.pressing() || Controller1.ButtonL1.pressing()){
          reverse = false;
        }
      }
      leftMotor.spin(forward, 0, pct);
      rightMotor.spin(forward, 0, pct);
    }
    reverse = true;
    
   
  }








}
