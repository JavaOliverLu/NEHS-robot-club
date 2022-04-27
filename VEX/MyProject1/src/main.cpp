/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\OLIVER                                           */
/*    Created:      Wed Nov 06 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// leftmotor            motor         1               
// clawmotor            motor         3               
// armmotor             motor         8               
// Controller1          controller                    
// rightmotor           motor         10              
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

float v1,v2,v3,v4;
 
int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  while(1){
    v2=Controller1.Axis2.position()*1;
    v1=Controller1.Axis1.position()*1;
    
    rightmotor.spin(forward,v2-v1,pct);
    leftmotor.spin(reverse,v2+v1,pct);
   
    if(Controller1.ButtonL2.pressing()){
      clawmotor.spin(reverse,60,pct);
    }

    else if(Controller1.ButtonL1.pressing()){
      clawmotor.spin(forward,60,pct);
    }
    else{
     clawmotor.spin(reverse,0,pct);
     clawmotor.stop(hold);
    }
     if(Controller1.ButtonR1.pressing()){
      armmotor.spin(reverse,60,pct);
    }
    else if(Controller1.ButtonR2.pressing()){
      armmotor.spin(forward,60,pct);
    }
    else{
     armmotor.spin(reverse,0,pct);
     armmotor.stop(hold);

    }


  }
}
