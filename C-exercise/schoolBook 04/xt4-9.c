#include<stdio.h>
int main(void){
    printf("������һ������");
    int n,m;
    scanf("%d",&n);
    if(n%2==0){
        printf("����һ������");
    }else{
        m=(n+1)/2;
        int i,j;
        for(i=1;i<=m;i++){
            for(j=2*(m-i);j>0;j--)
                printf(" ");
            for(j=1;j<=2*i-1;j++)
                printf("* ");
            printf("\n");
        }
        for(i=1;i<=(n-m);i++){
            for(j=1;j<=2*i;j++)
                printf(" ");
            for(j=1;j<=2*(m-i)-1;j++)
                printf("* ");
            printf("\n");
        }   
    }
    getchar();
    getchar();
}