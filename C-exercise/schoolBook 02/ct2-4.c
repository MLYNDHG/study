/**
 * �����¶�ת�����¶�
 * ��ʽ����=���H-32)*5/9
*/
#include<stdio.h>
int main(){
    float fahr=150.0,celsius;
    celsius=5*(fahr-32)/9;
    printf("%3.2fת�����¶�Ϊ%3.2f",fahr,celsius);
    getchar();
}