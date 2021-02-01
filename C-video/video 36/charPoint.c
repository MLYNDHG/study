#include<stdio.h>
void main(){
    static char a[100]="hello";
    char *b="world";
    printf("%s",a);
    printf("%s",b);
    getchar();
}