/**
 * �������幫ʽ��h=g*t*t/2
*/
#include<stdio.h>
int main(){
    //�ȼ���3���½�������  �ǲ��Ǵ�����ʼ�߶�   �������ֱ�Ӿ���һ��
    float high;
    int g=10,t=3,total=100;
    high=g*t*t/2;
    if(high>=total){
        printf("%d��������ľ���Ϊ%f��",t,total);
    }else{
        printf("%d��������ľ���Ϊ%3.1f��",t,high);
    }
    getchar();
}