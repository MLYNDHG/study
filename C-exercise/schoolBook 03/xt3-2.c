#include<stdio.h>
int main(void){
    printf("���뵱ǰ���١���������");
    float carSpeed,roadSpeed;
    scanf("%f%f",&carSpeed,&roadSpeed);
    if(carSpeed>roadSpeed*1.5){
        printf("������ʻ֤");
    }else if(carSpeed>roadSpeed*1.1){
        printf("200Ԫ����");
    }else{
        printf("safety");
    }
    getchar();
    getchar();
    return 0;
}