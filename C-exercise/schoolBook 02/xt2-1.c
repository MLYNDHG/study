#include<stdio.h>
int main(){
    printf("输入四个整数");
    int num1,num2,num3,num4,sum;
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    sum=num1+num2+num3+num4;
    printf("平均值为：%.1f",(float)sum/4);
    getchar();
    getchar();
}