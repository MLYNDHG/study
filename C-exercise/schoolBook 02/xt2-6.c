#include<stdio.h>
double fact(n);
int main(){
    printf("输入一个数");
    int num;
    scanf("%d",&num);
    float sum;
    for(int i=1;i<=num;i++){
        sum+=fact(i);
    }
    printf("前%d项的和为：%.0f",num,sum);
    getchar();
    getchar();
    return 0;
}
double fact(n){
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}