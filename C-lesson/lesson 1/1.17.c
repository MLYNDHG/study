#include<stdio.h>
#define MAX 10000
/**
 * ��ȡ����������ı���  ����80���ַ���
 * getLine
*/
int Lenth=0;//��ǰ����
int MAXLenth=0;//��󳤶�
char NOWchar[MAX];//��ǰ�����ı�
char MAXchar[MAX];//��ı�
/**
 * ��������
*/
int getLine(char NOWchar[],int limit);
void copyChar(char MAXchar[],char NOWchar[]);
main(){
    while ((Lenth=getLine(NOWchar,MAX))>0)
    {
        if(Lenth>MAXLenth){
            MAXLenth=Lenth;
            copyChar(MAXchar,NOWchar);
        }
    }
    if(MAXLenth>=80){
        printf("����Ϊ%d\n",MAXLenth);
        printf("%s",MAXchar);
    }else{
        printf("δ���ֳ��ȳ���80���ı���\n"); 
    }
    getchar();
}
/**
 * ������ı�����
*/
int getLine(char NOWchar[],int limit){
    int c,i=0;
    for (i = 0; i < limit&&(c=getchar())!=EOF&&c!='\n'; i++)
    {
       NOWchar[i]=c;
    }
    if(c=='\n'){
        NOWchar[i]=c;
        i++;
    }
    NOWchar[i]='\0';//������ֹ��ʶ
    return i;
}
/**
 * �����ı�
*/
void copyChar(char MAXchar[],char NOWchar[]){
    int i=0;
    while (NOWchar[i]!='\0')
    {
        MAXchar[i]=NOWchar[i];
        i++;
    }
}