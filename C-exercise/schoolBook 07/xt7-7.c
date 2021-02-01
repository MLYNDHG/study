#include<stdio.h>
int main(void){
    printf("输入字符1~80（回车结束）");
    char str[80],i=0;
    while((str[i]=getchar())!='\n'){
        if(str[i]>='A'&&str[i]<='Z'){
           str[i]='Z'+'A'-str[i];
        }
        i++;
    }
    str[i]='\0';
    i=0;
    while(str[i]!='\0'){
        putchar(str[i]);
        i++;
    }
    getchar();
    getchar();
    return 0;
}