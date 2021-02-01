#include<stdio.h>
int main(){
    printf("输入一个数");
    float x;
    scanf("%f",&x);
    if(x){
        printf("%.1f",1/x);
    }else{
        printf("%d",0);
    }
    getchar();
    getchar();
    getchar();
}