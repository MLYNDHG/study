#include<stdio.h>
#include<string.h>
int main(){
    char p[20]={'a','b','c','d'},q[]="abc",r[]="abcde";
    strcpy(p+strlen(q),r);
    strcat(p,q);
    printf("%d%d",sizeof(p),strlen(p));


    char a[6]="array";
    char *ptr=a;
    strcpy(ptr,"asdasdasd") ;
    printf("%s",ptr);
    getchar();
    getchar();
    return 0;
}