#include<stdio.h>
int main(){
    printf("输入一个数");
    int num;
    scanf("%d",&num);
    float sum,temp;
    int flag=1;
    for(int i=1;i<=num;i++){
        sum+=1.0*i/(i*2-1)*flag;
        flag=-flag;
    }
    printf("前%d项的和为：%f",num,sum);
    getchar();
    getchar();
    return 0;
}