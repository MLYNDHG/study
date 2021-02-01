#include<stdio.h>
static int wuhu(){
        int temp;//临时变量用来累加
        for(int i=3;i<=100;i++){//循环
            if((i%3==0)&&i%5==0){//判断i是否同时能被3与5整除
                printf("%d",i);
            }            
        }
        printf("%d",temp);
        return 0;
}
int main(){
    wuhu();
    getchar();
}