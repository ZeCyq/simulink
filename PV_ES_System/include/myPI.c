#include "myPI.h"
#include <stdio.h>

//*********** Structure Init Function ****//
void CNTL_PI_F_init(PI_Controller *k){
	/* Initialize variables */
	k->Ref = 0;
	k->Fbk = 0;
	k->Out = 0;
	k->Kp = 0;
	k->Ki = 0;
	k->Umax = (1.0);
	k->Umin = (0.0);
    k->Error = 0;
    k->Integral = 0;
    k->Error_Last = 0;
}


void CNTL_PI_F_FUNC(PI_Controller *v){
	/* proportional term */
    //v.Out = Kp*error + Ki*integral
    v->Error_Last = v->Error;
    v->Error = v->Ref - v->Fbk;
    v->Integral = v->Error + v->Error_Last;
    v->Out = v->Kp*v->Error + v->Ki*v->Integral;
    if (v->Out>v->Umax)
    {
        v->Out = v->Umax;
    }
    if (v->Out<v->Umin)
    {
        v->Out = v->Umin;
    }
    
    
}