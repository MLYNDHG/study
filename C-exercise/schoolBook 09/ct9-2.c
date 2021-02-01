#include<stdio.h>
int main(void){ 
    struct born{
        int year;
        int month;
        int day;
    };
    struct student{
        int num;
        char name[10];
        int english,chinese,math;
        double average;
        struct born birthday;
    };
    return 0;
}