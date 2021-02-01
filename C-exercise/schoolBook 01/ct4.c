/**
 * 给定数字n判断是不是质数
 * 质数：只能被自己和1整除的数
*/
#include<stdio.h>
void main(){
    int n,i=2,bool=1;
    scanf("%d",&n);
    for(i;i<n;i++){
        if(n%i==0){
            bool=0;
            printf("不是一个质数");
            break;
        }
    }
    if(bool){
        printf("是一个质数");
    }
    getchar();
    getchar();
    getchar();
}