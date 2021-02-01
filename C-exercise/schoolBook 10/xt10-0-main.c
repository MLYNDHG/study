#include<stdio.h>
#include"xt10-0-judge.c"

int num;
int main(void){
    printf("请输入一个数\n");
    scanf("%d",&num);
    if(judgement(num)){
        printf("是一个质数\n");
    }else{
        printf("不是一个质数\n");
    }
    getchar();
    getchar();
    return 0;
}
