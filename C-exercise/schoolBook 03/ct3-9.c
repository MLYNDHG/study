#include<stdio.h>
int main(){
    printf("����һ������");
    float x;
    scanf("%f",&x);
    if(x>15){
        printf("%f",2*x-10.5);
    }else{
        if(x<0){
            printf("%f",0);
        }else{
            printf("%f",4*x/3);
        }
    }
    getchar();
    getchar();
};