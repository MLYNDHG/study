#include<stdio.h>
int main(void){
    printf("输入一个正整数");
    int num,temp;
    scanf("%d",&num);
    int n=2,m=1;
    float result;
    for(int i=1;i<=num;i++){
        result+=(n*1.0/m);
        temp=n;
        n=n+m;
        m=temp;
    }
    printf("%f",result);
    getchar();
    getchar();
    return 0;
}