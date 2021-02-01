#include<stdio.h>
int main(){
    printf("输入一个数");
    int n;
    scanf("%d",&n);
    float sum,flag=1;
    for(int i=1;i<=n;i++){
        sum=sum+(1/(((i-1)*3+1)*1.0))*flag;//此处注意要将i转化一下否者1除以i之后会得到零（四舍五入）
        flag=-flag;
    }
    printf("%f",sum);
    getchar();
    getchar();
    getchar();
    return 0;
}