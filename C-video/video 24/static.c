#include<stdio.h>
void fun();
void main(){
    fun();
    // printf();
}

void fun(){
    static int static_loacl=12121;
}