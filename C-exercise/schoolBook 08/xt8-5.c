#include<stdio.h>
#include<stdlib.h>
int main(void){
    void strmcpy(char *s,char *t,int m);
    printf("请输入一个字符串：\n"); 
    char str[1000],tstr[1000];
    gets(tstr);   
    printf("请输入一个正整数：\n");
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