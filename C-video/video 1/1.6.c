#include<stdio.h>
/**
 * ��һ�����Ľ׳�
*/
int factorl(int n);
void main(){
    int num;
    printf("please into a number.\n");
    scanf("%d",&num);
    num=factorl(num);
    printf("%d",num);
    getchar();
    getchar();
}
/**
 * ��׳˺���
 * n�Ľײ�
 */
int factorl(int n){
    int total=1;
    for(int i=1;i<=n;i++){
        total*=i;    
    }
    return total;
}