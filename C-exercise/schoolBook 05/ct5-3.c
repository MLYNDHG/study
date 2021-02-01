#include<stdio.h>
int pyramid(int m);
int main(void){
    printf("输入一个数");
    int a;
    scanf("%d",&a);
    pyramid(a);
    getchar();
    getchar();
    return 0;
}
int pyramid(int n){
    int sum;
    //总计n行
    for(int i=1;i<=n;i++){
        //对每一行的操作  
        //用空格顶开
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    } 
     for(int i=n-1;i>=1;i--){
        //对每一行的操作  
        //用空格顶开
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }   
};
