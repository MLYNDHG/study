#include<stdio.h>
#include"xt10-0-judge.c"

int num;
int main(void){
    printf("������һ����\n");
    scanf("%d",&num);
    if(judgement(num)){
        printf("��һ������\n");
    }else{
        printf("����һ������\n");
    }
    getchar();
    getchar();
    return 0;
}
