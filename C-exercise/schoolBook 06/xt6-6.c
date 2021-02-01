#include<stdio.h>
int main(void){
    int reverse(int num);
    printf("输入一个数倒序输出");
    int num;
    scanf("%d",&num);
    printf("%d",reverse(num));
    getchar();
    getchar();
    return 0;
}
int reverse(int num){
    int temp=0;
    while(num>0){
        temp=temp*10+num%10;
        num=num/10;
    }
    return temp;
}