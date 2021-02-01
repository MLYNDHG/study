#include<stdio.h>
int even(int x);
int main(void){
    printf("输入一个数，判断奇数偶数\n");
    int x;
    scanf("%d",&x);
    while(x>0){
        if(even(x)){
            printf("偶数\n");
        }else{
            printf("奇数\n");
        }        
        printf("输入一个数，判断奇数偶数\n");
        scanf("%d",&x);
    }
    printf("finish!\n");
    getchar();
    getchar();
    return 0;
}
int even(int x){
    if(x%2==0){
        return 1;
    }else {
        return 0;
    }
}