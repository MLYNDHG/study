#include<stdio.h>
double fact(n);
int main(){
    printf("输入两个数，用空格隔开");
    int n,m;
    double kind;
    scanf("%d%d",&n,&m);
    if(m<=n){
        kind=fact(n)/(fact(m)*fact(n-m));
        printf("从%d取出%d组合数为%d",n,m,(int)kind);
    }else{
        printf("Invail vaule");
    }
  
    getchar();
    getchar();
    getchar();
};
//计算n的阶层
double fact(n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    return sum;
}