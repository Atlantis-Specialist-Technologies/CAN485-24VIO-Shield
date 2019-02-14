/**********************************************************************************
 * Created by Atlantis Specialist Technologies
 * by James Blakey-Milner, 04 Feb 2019.
 **********************************************************************************/

#include "Arduino.h"
#include "AST_V24IO.h"

void initV24IO(void){
    jtd_set(1);                 // Disable JTAG debugging. Calls makro difined in pins_arduino.h for the CAN485
}