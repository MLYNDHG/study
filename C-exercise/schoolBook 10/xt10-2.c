#include<stdio.h>
double fact(int n);
double doublefact(double num);
int main(){
    printf("输入一个数\n");
    int num;
    double sum;
    scanf("%d",&num);        
    sum=doublefact(num);
    printf("%f",sum);
    getchar();
    getchar();
    return 0;
}
//计算每个数的阶乘
double fact(int n){
    double sum;
    if(n==1){
        sum=1;
    }else{
        sum=fact(n-1)+n;
    }
    return sum;
}
//计算每个数的阶乘之和
double doublefact(double num){
    double sum;
    if(num==1){
        sum=fact(1);
    }else{
        sum=doublefact(num-1)+fact(num);
    }
    return sum;
}