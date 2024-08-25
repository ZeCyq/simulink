#ifndef CNTL_PI_F_H_
#define CNTL_PI_F_H_

#include <stdio.h>

typedef struct {
	float  Ref;   			// Input: reference set-point
	float  Fbk;   			// Input: feedback
	float  Out;   			// Output: controller output
	float  Kp;				// Parameter: proportional loop gain
	float  Ki;			    // Parameter: integral gain
	float  Umax;				// Parameter: upper saturation limit
	float  Umin;				// Parameter: lower saturation limit
	float  up;				// Data: proportional term
	float  ui;				// Data: integral term
	float  v1;				// Data: pre-saturated controller output
	float  i1;				// Data: integrator storage: ui(k-1)
	float  w1;				// Data: saturation record: [u(k-1) - v(k-1)]
} CNTL_PI_F;

//*********** Function Declarations *******//
void CNTL_PI_F_init(CNTL_PI_F *k);
void CNTL_PI_F_FUNC(CNTL_PI_F *v);




#endif /* CNTL_PI_F_H_ */