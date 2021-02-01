#include<stdio.h>
int factorsum(int basic);
int main(void){
    printf("输入两个正整数");
    int n,m,sum=0;
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++){      
        printf("%d\n",fibonacci(i));          
    }
    printf("finish!");
    getchar();
    getchar();

}
int fibonacci(int n){
    if(n==1||n==2){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }    
}