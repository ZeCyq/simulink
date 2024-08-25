#ifndef _MYPI_F_H_
#define _MYPI_F_H_

typedef struct {
	float  Ref;   			// Input: reference set-point
	float  Fbk;   			// Input: feedback
	float  Out;   			// Output: controller output
	float  Kp;				// Parameter: proportional loop gain
	float  Ki;			    // Parameter: integral gain
	float  Umax;				// Parameter: upper saturation limit
	float  Umin;				// Parameter: lower saturation limit
    float  Error;
    float  Integral;
    float  Error_Last;
	//float32  up;				// Data: proportional term
	//float32  ui;				// Data: integral term
	//float32  v1;				// Data: pre-saturated controller output
	//float32  i1;				// Data: integrator storage: ui(k-1)
	//float32  w1;				// Data: saturation record: [u(k-1) - v(k-1)]
} PI_Controller;

void CNTL_PI_F_init(PI_Controller *k);
void CNTL_PI_F_FUNC(PI_Controller *v);


#endif 