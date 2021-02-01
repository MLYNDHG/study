#include<stdio.h>
int main(void){
    printf("输入一个正整数(1~6)\n");
    int n,a[6][6],max=0;
    scanf("%d",&n);
    printf("请录入%d个正整数\n",n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(i>j&&a[i][j]!=0){
                 flag=0;
             }
        }
    }
    if(!flag){
        printf("不是一个上三角矩阵");
    }else{
        printf("是一个上三角矩阵");
    }
    getchar();
    getchar();
    return 0;
}