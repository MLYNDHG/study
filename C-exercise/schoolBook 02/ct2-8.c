/**
 * 华氏温度转摄氏温度---输入
 * 公式：℃=（℉-32)*5/9
*/
#include<stdio.h>
int main(){
    printf("输入华氏温度");
    float fahr,celsius;
    scanf("%f",&fahr);
    celsius=5*(fahr-32)/9;
    printf("%3.2f转摄氏温度为%3.2f",fahr,celsius);
    getchar();
    getchar();
    getchar();
}