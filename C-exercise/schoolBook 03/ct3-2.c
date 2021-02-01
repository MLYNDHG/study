#include<stdio.h>
int main(){
    printf("输入一个数字");
    float x;
    scanf("%f",&x);
    if(x<0){
        printf("-1");
    }else if(x=0){
        printf("0");
    }else{
        printf("1");
    }
    getchar();
    getchar();
};