/**
 * ��������n�ж��ǲ�������
 * ������ֻ�ܱ��Լ���1��������
*/
#include<stdio.h>
void main(){
    int n,i=2,bool=1;
    scanf("%d",&n);
    for(i;i<n;i++){
        if(n%i==0){
            bool=0;
            printf("����һ������");
            break;
        }
    }
    if(bool){
        printf("��һ������");
    }
    getchar();
    getchar();
    getchar();
}