#include<stdio.h>
static int wuhu(){
        int temp;//��ʱ���������ۼ�
        for(int i=1;i<=99;i++){//ѭ��
            if(i%2!=0){//�ж�i��ż����������i   �����ۼ�
                // printf("%d",i);
                temp+=i;
            }            
        }
        printf("%d",temp);
        return 0;
}
int main(){
    wuhu();
    getchar();
}