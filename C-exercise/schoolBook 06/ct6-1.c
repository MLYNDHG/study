#include<stdio.h>
int main(void){
    printf("输入一个十进制数，将以八进制、十六进制输出");
    int a;
    scanf("%d",&a);
    printf("%o    %x",a,a);
    getchar();
    getchar();
    return 0;
}