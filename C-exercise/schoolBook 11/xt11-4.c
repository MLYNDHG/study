#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * mystrcat(char *s,char *t);
int main(void){
    char *s,t[100];
    s=(char*)calloc(sizeof(char),100);//
    printf("请输入第一个字符\n");    
    scanf("%s",s);
    printf("请输入第二个字符\n");    
    scanf("%s",t);
    strcpy(s, strcat(s,t));
    printf("%s\n",s);   
    getchar();
    getchar();
    return 0;
}
char * mystrcat(char *s,char *t){
    int i=strlen(s),j=0;
    while(*(t+(j))!='\0'){
        *(s+(i++))=*(t+(j++));
    }
    return s;
}