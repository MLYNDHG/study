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
     * �˴�˵��forѭ����i��ֵ���ڴ˴�ѭ��֮����е��ۼ�
    */
    return 0;
}