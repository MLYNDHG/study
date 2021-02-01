#include<stdio.h>
#define MAX 10000
/**
 * 获取并保存最长的文本行  最少80个字符的
 * getLine
*/
int Lenth=0;//当前长度
int MAXLenth=0;//最大长度
char NOWchar[MAX];//当前输入文本
char MAXchar[MAX];//最长文本
/**
 * 函数声明
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
        printf("长度为%d\n",MAXLenth);
        printf("%s",MAXchar);
    }else{
        printf("未发现长度超过80的文本行\n"); 
    }
    getchar();
}
/**
 * 返回最长文本长度
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
    NOWchar[i]='\0';//设置终止标识
    return i;
}
/**
 * 复制文本
*/
void copyChar(char MAXchar[],char NOWchar[]){
    int i=0;
    while (NOWchar[i]!='\0')
    {
        MAXchar[i]=NOWchar[i];
        i++;
    }
}