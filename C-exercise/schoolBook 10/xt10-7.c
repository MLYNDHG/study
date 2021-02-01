#include<stdio.h>
int dectobin(int n);
int main(){
    int n;
    printf("请输入一个数");
    scanf("%d",&n);     
    printf("%d",dectobin(n));
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
int dectobin(int n){
    int result=0;
    if(n==0){
        result=0;
    }else{
        result=dectobin(n/2)*10+n%2;
    }    
    return result;
}