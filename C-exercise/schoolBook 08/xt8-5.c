#include<stdio.h>
#include<stdlib.h>
int main(void){
    void strmcpy(char *s,char *t,int m);
    printf("������һ���ַ�����\n"); 
    char str[1000],tstr[1000];
    gets(tstr);   
    printf("������һ����������\n");
    int m;
    scanf("%d",&m);   
    strmcpy(str,tstr,m);
    puts(str);
    getchar();
    getchar();
    return 0;
}
void strmcpy(char *s,char *t,int m){
   char *ptr=t; 
   for(int i=0;*(ptr+i)!='\0';i++){
        *(s+i)=*(ptr+m+i);
   } 
}