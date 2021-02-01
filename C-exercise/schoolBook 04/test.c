#include<stdio.h>
int main(void){
    for (int i = 1; i < 5; i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for (int i = 1; i < 5; ++i)
    {
        printf("%d",i);
    }
    getchar();
    getchar();
    /**
     * 此处说明for循环中i的值是在此次循环之后进行的累加
    */
    return 0;
}