#include<stdio.h>
/**
 * �ж�������ı��ж�����
*/
main(){
    int c,numLine=0;
    while ((c=getchar())!=EOF)
    {
        if(c=='\n'){
            numLine++;
        }
    }
    printf("��%d��\n",numLine);
    getchar();
}