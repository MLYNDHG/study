#include<stdio.h>
int main(void){
    printf("输入两个正整数");
    int a,n,sum,singleItem;
    scanf("%d%d",&a,&n);
    for(int i=1;i<=n;i++){
        singleItem=0;
        for(int j=0;j<i;j++){
            singleItem=(singleItem*10)+a;
        }
        sum+=singleItem;
    }
    printf("序列和为：%d",sum);
    getchar();
    getchar();
    return 0;
}