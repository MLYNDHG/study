#include<stdio.h>
int main(){
    printf("����21�����е�ĳ�����");
    int year;
    scanf("%d",&year);
    printf("21������ĿǰΪֹ������·�");
    for (int i =2000; i <= year; i++)
    {   
        if((i%4==0&&i%100!=0)||(i%400==0)){
            printf("%d\n",i);
        }
    }
    getchar();
    getchar();
}
