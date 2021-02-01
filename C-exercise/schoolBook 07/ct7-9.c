#include<stdio.h>
int main(void){
    int day_of_year(int year,int month,int day);
    printf("输入年月日（格式：2020-3-12）");
    int year,month,day;
    scanf("%d-%d-%d",&year,&month,&day);
    printf("今天是今年的第%d天",day_of_year(year,month,day));
    getchar();
    getchar();
    return 0;
}
int day_of_year(int year,int month,int day){
    int num=0,leap=0;
    int tab[2][13]={
        {0,31,28,31,30,31,30,31,31,31,30,31,30},
        {0,31,29,31,30,31,30,31,31,31,30,31,30}
    };
    leap=(year%4==0&&year%100==0||year%400==0);
    num=day+tab[leap][month];
    return num;
}