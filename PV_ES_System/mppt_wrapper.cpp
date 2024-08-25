
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#define SIMPLIFIED_RTWTYPES_COMPATIBILITY
#include "rtwtypes.h"
#undef SIMPLIFIED_RTWTYPES_COMPATIBILITY
#endif



/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>
#include "Solar_F.h"
#include "MPPT_INCC_F.h"
#include "MPPT_INCC_F.c"
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1
#define u_1_width 1
#define y_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
/* extern double func(double a); */
MPPT_INCC_F mppt_incc1;
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Start function
 *
 */
void mppt_Start_wrapper(void)
{
/* %%%-SFUNWIZ_wrapper_Start_Changes_BEGIN --- EDIT HERE TO _END */
/*
 * 此处显示自定义开始代码。
 */

    MPPT_INCC_F_init(&mppt_incc1);
    mppt_incc1.MaxVolt = 40; 
    mppt_incc1.MinVolt = 0.0; 
    mppt_incc1.Stepsize = 0.005;
/* %%%-SFUNWIZ_wrapper_Start_Changes_END --- EDIT HERE TO _BEGIN */
}
/*
 * Output function
 *
 */
void mppt_Outputs_wrapper(const real_T *IpvRead,
			const real_T *VpvRead,
			real_T *y0)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
mppt_incc1.Ipv = IpvRead[0];
    mppt_incc1.Vpv = VpvRead[0];
    MPPT_INCC_F_FUNC (&mppt_incc1); 
    y0[0] = mppt_incc1.VmppOut;
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}


