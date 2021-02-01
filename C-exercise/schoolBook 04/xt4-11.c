#include<stdio.h>
int main(void){
    printf("请输入正整数");
    int n,m,rabbit=1;
    scanf("%d",&n);
    for(int i=3;;i=i+3){
        if(rabbit>=n){
            m=i;
            break;
        }        
        rabbit=2*rabbit;    
    }  
    printf("%d个月",m);  
    getchar();
    getchar();
}