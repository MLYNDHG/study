#include<stdio.h>
int fib(int n);
int main(){
    int n;
    printf("请输入一个数");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d\t",fib(i));
    }    
    getchar();
    getchar();
    return 0;
}

int fib(int n){
    int sum;
    if(n==0||n==1){
        sum=n;
    }else{
        sum=fib(n-2)+fib(n-1);
    }
    return sum;
}