/**
 * 自由落体公式：h=g*t*t/2
*/
#include<stdio.h>
int main(){
    //先计算3秒下降多少米  是不是大于起始高度   如果大于直接就是一百
    float high;
    int g=10,t=3,total=100;
    high=g*t*t/2;
    if(high>=total){
        printf("%d秒内下落的距离为%f米",t,total);
    }else{
        printf("%d秒内下落的距离为%3.1f米",t,high);
    }
    getchar();
}