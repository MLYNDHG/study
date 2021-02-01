#include<stdio.h>
int ack(int m,int n);
int main(void){
    printf("请输入两个数\n");
    int m,n;
    double sum;
    scanf("%d%d",&m,&n);
    sum=ack(m,n);
    printf("%f",sum);
    getchar();
    getchar();
    return 0;
}
int ack(int m,int n){
    if(m==0){
        return n+1;
    }else if(n==0&&m>0){
        return ack(m-1,1);
    }else if(m>0&&n>0){
        return ack(m-1,ack(m,n-1));
    }    
}