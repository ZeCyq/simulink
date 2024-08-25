#ifndef _MYMPPT_H_
#define _MYMPPT_H_

typedef struct{
float Vpv;//光伏输出电压
float Ipv;//光伏输出电流

float  MaxVolt;
float  MinVolt;
float  Stepsize;
float  VmppOut;

//内部使用变量
float deltaU;
float deltaI;
float deltaP;




}MPPT_Controller;







#endif //_MYMPPT_H_