#include<stdio.h>
#include<math.h>
int main(){
    printf("输入一个数");
    float x;
    scanf("%f",&x);
    if(x>=0){
        printf("%f",sqrt(x));
    }else{
        printf("%f",pow(x+1,2)+2*x+1/x);
    }
    getchar();
    getchar();
    getchar();
}