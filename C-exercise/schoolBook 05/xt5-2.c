#include<stdio.h>
int even(int x);
int main(void){
    printf("����һ�������ж�����ż��\n");
    int x;
    scanf("%d",&x);
    while(x>0){
        if(even(x)){
            printf("ż��\n");
        }else{
            printf("����\n");
        }        
        printf("����һ�������ж�����ż��\n");
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