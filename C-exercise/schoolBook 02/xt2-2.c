#include<stdio.h>
int main(){
    printf("�������õ���");
    int powerLight;
    float sum;
    scanf("%d",&powerLight);
    if(powerLight<=50){
        sum=powerLight*0.53;
    }else{
        sum=(powerLight-50)*0.58+50*0.53;
    }
    printf("�����õ���Ϊ��%.2f",sum);
    getchar();
    getchar();
}