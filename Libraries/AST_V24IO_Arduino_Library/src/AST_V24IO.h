/**********************************************************************************
 * Created by Atlantis Specialist Technologies
 * by James Blakey-Milner, 04 Feb 2019.
 **********************************************************************************/
 
#ifndef AST_V24IO_H
#define AST_V24IO_H

#include "Arduino.h"

#define V24O1 4
#define V24O2 17
#define V24O3 16
#define V24O4 15

#define V24I1 20
#define V24I2 6
#define V24I3 7
#define V24I4 8

const int V24Outputs[4] = {V24O1,V24O2,V24O3,V24O4};
const int V24Inputs[4]  = {V24I1,V24I2,V24I3,V24I4};

void initV24IO(void);

#endif