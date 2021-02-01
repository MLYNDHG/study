#include<stdio.h>
/**
 * 求一个数的阶乘
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
 * 求阶乘函数
 * n的阶层
 */
int factorl(int n){
    int total=1;
    for(int i=1;i<=n;i++){
        total*=i;    
    }
    return total;
}