#include<stdio.h>
struct complex{
    int real;
    int empty;
} com1,com2;
int main(void){
    printf("请输入两个复数 格式：a1+b1i a2+b2i\n");
    scanf("%d+%di %d+%di",&com1.real,&com1.empty,&com2.real,&com1.empty);
    printf("两个复数为：%d+%di %d+%di\n",com1.real,com1.empty,com2.real,com1.empty);
    printf("两个复数的乘为：%d+%di",com1.real*com2.real-com1.empty*com2.empty,com1.real*com2.empty+com1.empty*com2.real);
    getchar();
    getchar();
    return 0;
}