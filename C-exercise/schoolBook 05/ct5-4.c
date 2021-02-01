#include<stdio.h>
int fact_s(int n);
int main(void){
    printf("输入一个数");
    int a,sum;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        sum=fact_s(i);
    }
    printf("%d!=%d",a,sum);    
    getchar();
    getchar();
    return 0;
}
int fact_s(int n){
    static int f=1;
    return f=f*n;
};
