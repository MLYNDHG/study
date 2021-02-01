#include<stdio.h>
int main(void){
    void sum_diff(int x,int y,int *sum,int *diff);
    int x,y,psum,pdiff;
    printf("请输入两个数");
    scanf("%d%d",&x,&y);
    sum_diff(x,y,&psum,&pdiff);
    printf("和：%d\n差：%d",psum,pdiff);
    getchar();
    getchar();
    return 0;
}
void sum_diff(int x,int y,int *sum,int *diff){
    *sum=x+y;
    *diff=x-y;
}