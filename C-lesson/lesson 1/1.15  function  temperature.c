#include<stdio.h>
/**
 * 使用函数的方式实现温度转换程序   °C=(5/9)(°F-32)
*/

float transTemperature(int celius,int ftar);
main(){
    int celius,ftar;
    celius=transTemperature(0,10);
}

float transTemperature(int celius,int ftar){
   return  celius=(ftar-32)*5/9;
}