#include<stdio.h>
int main(void){
    printf("请输入吃的天数");
    int n,m,peach=1;
    scanf("%d",&n);
    //i表示桃子的总个数
    for(int i=1;i<n;i++){
        peach=2*peach+1;       
    }  
    printf("第一天的桃子%d",peach);  
    getchar();
    getchar();
}