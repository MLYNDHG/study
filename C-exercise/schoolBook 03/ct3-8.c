#include<stdio.h>
int main(){
    printf("您有五次查询的机会\n");
    int n;
    for(int i=0;i<5;i++){
        printf("[1]apples\n[2]pears\n[3]oranges\n[4]grapes\n[0]Exits\n");
        printf("输入查询序号");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        switch(n){
            case 1: printf("3.00元/千克\n"); break;
            case 2: printf("2.50元/千克\n"); break;
            case 3: printf("4.10元/千克\n"); break;
            case 4: printf("10.2元/千克\n"); break;
            default:printf("unknown\n");break;
        }
    }
    printf("thanks!");
    getchar();
    getchar();
}