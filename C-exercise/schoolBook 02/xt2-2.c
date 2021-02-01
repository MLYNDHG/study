#include<stdio.h>
int main(){
    printf("输入月用电量");
    int powerLight;
    float sum;
    scanf("%d",&powerLight);
    if(powerLight<=50){
        sum=powerLight*0.53;
    }else{
        sum=(powerLight-50)*0.58+50*0.53;
    }
    printf("本月用电量为：%.2f",sum);
    getchar();
    getchar();
}