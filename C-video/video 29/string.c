/**
 * ����һ�����ʺŽ������ַ���(����80����.��)��ͳ�����������ַ��ĸ�����
*/
#include<stdio.h>
void main(){
    char str[80];
    int i=0,len=0;
    while ((str[i]=getchar())!='?')
        i++;
    str[i]='\0';
    
    int count=0;
    for(len;str[len]!='\0';len++){
        if(str[len]<='9'&&str[len]>='0'){
            count++;
        }
        putchar(str[len]);
    }
    printf("\n%d������",count);
    getchar();
    getchar();
}