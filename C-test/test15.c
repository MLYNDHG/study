#include<stdio.h>
static int wuhu(){
        int temp;//��ʱ���������ۼ�
        for(int i=3;i<=100;i++){//ѭ��
            if((i%3==0)&&i%5==0){//�ж�i�Ƿ�ͬʱ�ܱ�3��5����
                printf("%d",i);
            }            
        }
        printf("%d",temp);
        return 0;
}
int main(){
    wuhu();
    getchar();
}