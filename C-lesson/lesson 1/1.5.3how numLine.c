#include<stdio.h>
/**
 * 判断输入的文本有多少行
*/
main(){
    int c,numLine=0;
    while ((c=getchar())!=EOF)
    {
        if(c=='\n'){
            numLine++;
        }
    }
    printf("有%d行\n",numLine);
    getchar();
}