#include<stdio.h>
int main(void){
    void splitfloat(float x,int *intpart,float *floatpart);
    printf("������һ��ʵ��");
    float num,floatpart;
    int intpart;
    scanf("%f",&num);
    splitfloat(num,&intpart,&floatpart);
    printf("�������%f\n�������֣�%d\nС�����֣�%f",num,intpart,floatpart);
    getchar();
    getchar();
    return 0;
}
void splitfloat(float x,int *intpart,float *floatpart){    
    *intpart=(int)x;
    *floatpart=x-*intpart;
};