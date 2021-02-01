#include<stdio.h>
int digit(int x,int digit);
int main(void){
    printf("输入一串数字，输出数字中2的个数\n");
    int number,times;
    scanf("%d",&number);    
    printf("%d中2的个数为\n%d",number,digit(number,2));    
    getchar();
    getchar();
    return 0;
}
int digit(int x,int digit){
    int k,count=0;
    k=x%10;
    while(x>0){
        if(k==digit){
            count++;
        }
        x=x/10;
        k=x%10;
    }
    return count;
}