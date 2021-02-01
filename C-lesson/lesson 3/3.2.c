#include<stdio.h>
#define MAX 10000
void copy(char t[],char s[]);
main(){
    char t[MAX];
    char s[MAX];
    int c,i=0;
    while((c=getchar())!=EOF){        
        s[i++]=c;
    }
    s[i]='\0';
    copy(t,s);
    printf("%s",t);
    getchar();
}

void copy(char t[],char s[]){
    for (int i = 0; i <MAX-1&&s[i]!='\0'; i++)
    {
        switch(s[i]){
            case '\n':
                t[i]='\\n';
                break;
            case '\t':
                t[i]='\\\t';
                break;
            default:
                t[i]=s[i];
                break;
        }
    }
        
}