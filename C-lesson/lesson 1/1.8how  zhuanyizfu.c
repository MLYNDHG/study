#include<stdio.h>
/**
 * ͳ���ı��е�  �ո�  �Ʊ��  ���з��ĸ���
*/
main(){
    int c,spaceNum=0,LineNum=0,Tnum=0;
    while ((c=getchar())!=EOF)
    {
        if(c==' '){spaceNum++;}
        if(c=='\t'){Tnum++;}
        if(c=='\n'){LineNum++;}
         printf("%d\n",c);
    }
    printf("�ո�ĸ���%d\n�Ʊ���ĸ���%d\n���з��ĸ���%d\n",spaceNum,Tnum,LineNum);
    getchar();
}