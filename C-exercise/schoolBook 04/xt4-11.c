#include<stdio.h>
int main(void){
    printf("������������");
    int n,m,rabbit=1;
    scanf("%d",&n);
    for(int i=3;;i=i+3){
        if(rabbit>=n){
            m=i;
            break;
        }        
        rabbit=2*rabbit;    
    }  
    printf("%d����",m);  
    getchar();
    getchar();
}