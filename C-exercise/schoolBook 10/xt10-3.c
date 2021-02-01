#include<stdio.h>
double fact(int n,int x);
int main(void){
    printf("请输入两个数\n");
    int x,n;
    scanf("%d%d",&x,&n);
    double multiply;
    multiply=fact(n,x);
    printf("%f",multiply);
    getchar();
    getchar();
    return 0;
}

double fact(int n,int x){
    double multiply;
    if(n==1){
        multiply=x;
    }else{
        multiply=fact(n-1,x)*x;
    }
    return multiply;
}