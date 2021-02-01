#include<stdio.h>
int main(void){
    printf("输入两个正整数(1~6)\n");
    int n,m,a[6][6],max=0;
    scanf("%d%d",&n,&m);
    printf("请录入%d个正整数\n",n*m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int lineAddition[6];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            lineAddition[i]+=a[i][j];
        }
    }
    for(int i=0;i<n;i++){        
        printf("第%d行的和：%d\n",i,lineAddition[i]);        
    }
    getchar();
    getchar();
    return 0;
}