#include<stdio.h>
int main(void){
    void splitfloat(float x,int *intpart,float *floatpart);
    printf("请输入一个实数");
    float num,floatpart;
    int intpart;
    scanf("%f",&num);
    splitfloat(num,&intpart,&floatpart);
    printf("这个数：%f\n整数部分：%d\n小数部分：%f",num,intpart,floatpart);
    getchar();
    getchar();
    return 0;
}
void splitfloat(float x,int *intpart,float *floatpart){    
    *intpart=(int)x;
    *floatpart=x-*intpart;
};