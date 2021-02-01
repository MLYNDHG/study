#include<stdio.h>
int main(void){
    printf("请输入一批正整数，负数、零结束输入\n");
    int num,sum=0;
    do{
        scanf("%d",&num);
        if(num>0&&num%2==1){
            sum+=num;
        }
    }while(num>0);
    printf("其中奇数的和%d",sum);
    getchar();
    getchar();
    return 0;
}