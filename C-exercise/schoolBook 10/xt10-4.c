#include<stdio.h>
double myfact(int x,int n);
int main(void){
    printf("请输入两个数\n");
    int x,n;
    
    scanf("%d%d",&x,&n);
    double multiply;
    multiply=myfact(x,n);
    printf("%f",multiply);
    getchar();
    getchar();
    return 0;
}
double fact(int x,int n){
    double sum;
    if(n==1){
        sum=x;
    }else{
        sum=fact(x,n-1)*x;
    }
    return sum;
}
double myfact(int x,int n){
    double multiply;
    int flag=1;
    if(n==1){
        multiply=x;
    }else{
        if(n%2==0){
            flag=-1;
        }
        multiply=myfact(x,n-1)+flag*fact(x,n);
    }
    return multiply;
}
