#include<stdio.h>
int main(void){
    printf("������һ�������������������������\n");
    int num,sum=0;
    do{
        scanf("%d",&num);
        if(num>0&&num%2==1){
            sum+=num;
        }
    }while(num>0);
    printf("���������ĺ�%d",sum);
    getchar();
    getchar();
    return 0;
}