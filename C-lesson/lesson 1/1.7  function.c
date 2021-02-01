#include<stdio.h>
/**
 * 函数的生命使用
*/
int power(int base,int n);
int main(){
    printf("%d",power(2,2));
    getchar();
    return 0;
}

int power(int base,int n){
    for (int i = 2; i <= n; i++)
    {
        base=base*base;
    }
    
    return base;
}