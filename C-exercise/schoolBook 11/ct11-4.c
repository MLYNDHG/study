#include<stdio.h>
char * match(char ch,char *str);
int main(){
    printf("������һ���ַ���\n");
    char str[80],*p;
    scanf("%s",str);
    printf("����������ַ�\n");
    getchar();
    char ch;
    scanf("%c",&ch);
    if((p=match(ch,str))!=NULL){
        printf("%s",p);
    }else{
        printf("Not Found\n");
    }
    getchar();
    getchar();
    return 0;
}

char * match(char ch,char *str){
    int i=0;
    char *ptr=NULL;
    while(*(str+i)!='\0'){
        if(*(str+i)==ch){
            ptr=str+i;
        }
        i++;        
    }
    return ptr;
}