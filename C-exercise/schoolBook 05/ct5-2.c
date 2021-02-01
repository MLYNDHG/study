#include<stdio.h>
int max(int m,int n);
int main(void){
    printf("输入两个数");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",max(a,b));
    getchar();
    getchar();
    return 0;
}
int max(int a,int b){
    int sum;
    if(a>=b){
        return a;
    }else {
        return b;
    }
    
};
