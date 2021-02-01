#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len = 0;
    int max = 0;
    int prevlen = 0;
    char line[MAXLINE];
    char longest[MAXLINE];
    char prevline[MAXLINE];

    do{
        len = getline(line , MAXLINE);
        if (len == 0){
            break;
        }

        if (prevlen == 0){ //如果之前没数据，说明是这一行的首次读取
            copy(prevline, line);
        } //如果不是首次读取，就不用再复制了

        if(len == MAXLINE - 1 && line[MAXLINE - 1] != '\n'){ //非正常结尾，说明要把上一次内容累加一下
                prevlen = prevlen + len;
                len = prevlen + len;
        }
        else{
            prevlen = 0; //正常结尾，清空前面缓存的长度
        }

        if (len > max){
            max = len;
            copy(longest, line);
        }
    }while(1);

    if (max > 0){
        printf("%d\t%s", max,longest);
    }
    getchar();
    return 0;
}

//getline函数：将一行读入s中并返回其长度
int getline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c !='\n'; ++i){
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

//copy函数：将from复制到to；这里假定to足够大
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}