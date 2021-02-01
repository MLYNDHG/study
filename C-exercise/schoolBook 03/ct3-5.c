#include<stdio.h>
int main(){
    printf("输入21世纪中的某个年份");
    int year;
    scanf("%d",&year);
    printf("21世纪至目前为止闰年的月份");
    for (int i =2000; i <= year; i++)
    {   
        if((i%4==0&&i%100!=0)||(i%400==0)){
            printf("%d\n",i);
        }
    }
    getchar();
    getchar();
}
