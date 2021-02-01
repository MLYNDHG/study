#include<stdio.h>
int main(void){
    printf("请输入行驶里程（公里）、等待时间（分钟）");
    float straigt,money;
    int minute;
    scanf("%f%f",&straigt,&minute);
    //先计算行驶费
    if(straigt<=3){
        money=10;
    }else if(straigt<=13){
        money=10+(straigt-3)*2;
    }else{
        money=(straigt-13)*3+20+10;
    }
    //计算等待费用
    if(minute>=5){
        money+=(minute%5)*2;
    }

    printf("总计金额：%f",money);
    getchar();
    getchar();
}