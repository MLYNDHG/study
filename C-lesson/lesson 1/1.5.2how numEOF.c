#include<stdio.h>
/**
 * ����������ٸ��ַ�
*/
main(){
    int num=0;
    while ((getchar())!=EOF)
        num++;
    printf("������ַ����� is %d\n",num);
    getchar();
}