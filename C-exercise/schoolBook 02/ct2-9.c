/**
 * ��������������  ���Ӽ��˳�����
*/
#include<stdio.h>
int main(){
    printf("�������������ո����");
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    printf("�ӷ���%d+%d=%d\n������%d-%d=%d\n�˷���%d*%d=%d\n������%d/%d=%f\n",
            num1,num2,num1+num2,num1,num2,num1-num2,num1,num2,num1*num2,num1,num2,(float)num1/num2);
    getchar();
    getchar();
    getchar();
}