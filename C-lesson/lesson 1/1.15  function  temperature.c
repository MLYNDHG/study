#include<stdio.h>
/**
 * ʹ�ú����ķ�ʽʵ���¶�ת������   ��C=(5/9)(��F-32)
*/

float transTemperature(int celius,int ftar);
main(){
    int celius,ftar;
    celius=transTemperature(0,10);
}

float transTemperature(int celius,int ftar){
   return  celius=(ftar-32)*5/9;
}