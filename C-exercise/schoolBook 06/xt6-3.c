#include<stdio.h>
int factorsum(int basic);
int main(void){
    printf("输入两个正整数");
    int n,m,sum=0;
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++){
        if(factorsum(i)==i){
            printf("数字%d是一个完数\n",i);
        }                
    }
    printf("finish!");
    getchar();
    getchar();

}
int factorsum(int basic){
    int total=0;
    for(int i=1;i<basic;i++){
        if(basic%i==0){
            total+=i;
        }
    }
    return total;
}