#include<stdio.h>
int main(){
    printf("�����ĸ�����");
    int num1,num2,num3,num4,sum;
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    sum=num1+num2+num3+num4;
    printf("ƽ��ֵΪ��%.1f",(float)sum/4);
    getchar();
    getchar();
}