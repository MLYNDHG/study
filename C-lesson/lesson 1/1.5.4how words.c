#include<stdio.h>
/**
 * ���㵥�ʸ���   ����  �ַ���
 * out��һ���ڵ�����  in��һ���ַ��ڵ�����
*/
#define IN 1
#define OUT 0
main(){
    int c,nc=0,nl=0,nw=0,state=OUT
    ;
    while ((c=getchar())!=EOF)
    {
        nc++;//�ַ�����һ
        if(c=='\n'){
            nl++;
        }
        if(c=='\n'||c=='\t'||c==' '){
            state=OUT;
        }else if(state==OUT){
            state=IN; 
            ++nw;
        }
    }
    printf("���ʸ�����%d �ַ�������%d�ı�������%d",nw,nc,nl);
    getchar();
}
