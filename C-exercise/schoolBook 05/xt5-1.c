#include<stdio.h>
int sign(int x);
int main(void){
    printf("输入一个数");
    int x;
    scanf("%d",&x);
    printf("%d", sign(x));
    getchar();
    getchar();
    return 0;
}
int sign(int x){
    if(x>0){
        return 1;
    }else if(x=0){
        return 0;
    }else{
        return -1;
    }
}