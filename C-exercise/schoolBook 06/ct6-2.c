#include<stdio.h>
int main(void){
    printf("输入一个小写字母，将以大写字母输出");
    char ch;
    scanf("%c",&ch);
    printf("%c",ch-'a'+'A');
    getchar();
    getchar();
    return 0;
}