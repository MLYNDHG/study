#include<stdio.h>
/**
 * 计算输入多少个字符
*/
main(){
    int num=0;
    while ((getchar())!=EOF)
        num++;
    printf("输入的字符个数 is %d\n",num);
    getchar();
}