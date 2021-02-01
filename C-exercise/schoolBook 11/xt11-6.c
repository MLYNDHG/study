#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * mysearch(char *s,char *t);
int main(void){
    char *s,*t;
    s=(char*)calloc(sizeof(char),100);//
    printf("请输入第一个字符串\n");    
    scanf("%s",s);
    printf("请输入第二个字符串\n"); 
    scanf("%s",t);    
    printf("%s\n",mysearch(s,t));   
    getchar();
    getchar();
    return 0;
}
char * mysearch(char *s,char *t){
    char *temp;
    int i=0,j=0,k=0,flag=0,r;
    while(*(s+i)!='\0'){
        if(*(s+i)==*(t+j)){
            r=k=i,flag=1;
            while(*(s+k)!='\0'&&*(t+j)!='\0'){
                if(*(s+k)!=*(t+j)){
                    flag=0;
                    break;
                }
                j++;
                k++;
            }
        }
        i++;
    }
    i=0;
    if(flag){
        temp=s+r;
    }else{
        temp=NULL;
    }
    return temp;
}