#include<stdio.h>
int prime(int x);
int main(void){
    printf("输入两个数，输出两数之间的所有质数之和\n");
    int n,m,sum=0;
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++){
        if(prime(i)){
            sum+=i;
        }
    }
    printf("%d,%d两数字之间的所有质之和为：%d\n",n,m,sum);
    getchar();
    getchar();
    getchar();
    return 0;
}
int prime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}