#define MAX(a,b,c) (a>b)?((a>c)?a:c):((b>c)?b:c)
#include<stdio.h>
int main(void){
    printf("������������\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    return 0;
}
//static  ��̬ȫ�ֱ���   ��̬ȫ�ֺ���
//�ɱ�����ǰ�ļ�ģ���е�ȫ�ֱ����뺯��
//���������ļ�������

//extern
static int woc;
static int max(int a,int b,int c){
    int max;
    if(a>b){
        if(a>c){
           max=a; 
        }else{
            max=c;
        }
    }else{
        if(b>c){
            max=b;
        }else{
            max=c;
        }
    }

}