#include<stdio.h>
int main(void){
    printf("������Ե�����");
    int n,m,peach=1;
    scanf("%d",&n);
    //i��ʾ���ӵ��ܸ���
    for(int i=1;i<n;i++){
        peach=2*peach+1;       
    }  
    printf("��һ�������%d",peach);  
    getchar();
    getchar();
}