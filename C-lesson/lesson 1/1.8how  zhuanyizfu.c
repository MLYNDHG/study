#include<stdio.h>
/**
 * 统计文本中的  空格  制表符  换行符的个数
*/
main(){
    int c,spaceNum=0,LineNum=0,Tnum=0;
    while ((c=getchar())!=EOF)
    {
        if(c==' '){spaceNum++;}
        if(c=='\t'){Tnum++;}
        if(c=='\n'){LineNum++;}
         printf("%d\n",c);
    }
    printf("空格的个数%d\n制表符的个数%d\n换行符的个数%d\n",spaceNum,Tnum,LineNum);
    getchar();
}