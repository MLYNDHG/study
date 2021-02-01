/**
 * 输入两个正整数  做加减乘除运算
*/
#include<stdio.h>
int main(){
    printf("输入两个数，空格隔开");
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    printf("加法：%d+%d=%d\n减法：%d-%d=%d\n乘法：%d*%d=%d\n除法：%d/%d=%f\n",
            num1,num2,num1+num2,num1,num2,num1-num2,num1,num2,num1*num2,num1,num2,(float)num1/num2);
    getchar();
    getchar();
    getchar();
}