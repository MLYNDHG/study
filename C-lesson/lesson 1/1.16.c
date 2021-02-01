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

        if (prevlen == 0){ //���֮ǰû���ݣ�˵������һ�е��״ζ�ȡ
            copy(prevline, line);
        } //��������״ζ�ȡ���Ͳ����ٸ�����

        if(len == MAXLINE - 1 && line[MAXLINE - 1] != '\n'){ //��������β��˵��Ҫ����һ�������ۼ�һ��
                prevlen = prevlen + len;
                len = prevlen + len;
        }
        else{
            prevlen = 0; //������β�����ǰ�滺��ĳ���
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

//getline��������һ�ж���s�в������䳤��
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

//copy��������from���Ƶ�to������ٶ�to�㹻��
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}