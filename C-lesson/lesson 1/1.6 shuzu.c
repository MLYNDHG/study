#include<stdio.h>
/**
 * ʹ�����鱣��ɸѡ��������
 * ��ӡ0-9���ֳ��ֵĴ���  �հ��ַ�  �����ַ����ֵĴ���
 * ctrl+z  -->  EOF
*/
main(){
    int c,num,numSpace=0,numOther=0;
    int ndigital[10];
    for (int i = 0; i < 10; i++)
    {
        ndigital[i]=0;
    }
    
    while ((c=getchar())!=EOF)
    {
        if(c>='0'&&c<='9'){
            ndigital[c-'0']++;
        }else if(c=='\n'||c=='\t'||c==' '){
            numSpace++;
        }else{
            numOther++;
        }
    }
    printf("ndigital:");
    for (int i = 0; i < 10; i++)
    {
        num=ndigital[i];
        printf(" %d",num);
    }
     printf("numSpace��%d numOther:%d",numSpace,numOther);
     getchar();
}
