#include<stdio.h>
int digit(int x,int digit);
int main(void){
    printf("����һ�����֣����������2�ĸ���\n");
    int number,times;
    scanf("%d",&number);    
    printf("%d��2�ĸ���Ϊ\n%d",number,digit(number,2));    
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