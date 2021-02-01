/**
 * 华氏温度转摄氏温度
 * 公式：℃=（℉-32)*5/9
*/
#include<stdio.h>
int main(){
    float fahr=150.0,celsius;
    celsius=5*(fahr-32)/9;
    printf("%3.2f转摄氏温度为%3.2f",fahr,celsius);
    getchar();
}