#include<stdio.h>
void main(){
    int value1,value2,sum;
    printf("Please into two numbers:\n");
    scanf("%d%d",&value1,&value2);
    sum=value1+value2;
    printf("%d+%d=%d",value1,value2,sum);
    getchar();
    getchar();
}