#include<stdio.h>
int main(void){
    printf("��������ʻ��̣�������ȴ�ʱ�䣨���ӣ�");
    float straigt,money;
    int minute;
    scanf("%f%f",&straigt,&minute);
    //�ȼ�����ʻ��
    if(straigt<=3){
        money=10;
    }else if(straigt<=13){
        money=10+(straigt-3)*2;
    }else{
        money=(straigt-13)*3+20+10;
    }
    //����ȴ�����
    if(minute>=5){
        money+=(minute%5)*2;
    }

    printf("�ܼƽ�%f",money);
    getchar();
    getchar();
}