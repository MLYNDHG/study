#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * mymatch(char *s,char ch1,char ch2);
int main(void){
    char *s,ch1,ch2;
    s=(char*)calloc(sizeof(char),100);//
    printf("请输入第一个字符串\n");    
    scanf("%s",s);
    printf("请输入第一个字符\n"); 
    getchar();   
    scanf("%c",&ch1);
    printf("请输入第二个字符\n");   
    getchar(); 
    scanf("%c",&ch2);    
    printf("%s\n",mymatch(s,ch1,ch2));   
    getchar();
    getchar();
    return 0;
}
char * mymatch(char *s,char ch1,char ch2){
    int i=0,j=0,k=0;
    char *str;
    while(*(s+i)!='\0'){
        if(*(s+i)==ch1){
            j=i;
        }
        i++;
    }
    i=0;
    while(*(s+i)!='\0'){
        if(*(s+i)==ch2){
            k=i;
        }
        i++;
    }
    str=s+j;
    *(str+k-j+1)='\0';
    return str;
}