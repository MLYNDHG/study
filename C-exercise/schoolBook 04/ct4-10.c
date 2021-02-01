#include<stdio.h>
int main(void){
    printf("输入成绩个数");
    int n,min=0,grade;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("输入第%d个成绩",i+1);
        scanf("%d",&grade);
        if(i==0){
            min=grade;
        };
        if(min>=grade){
            min=grade;
        }
    }
    printf("成绩中最小值为：%d",min);
    getchar();
    getchar();
    return 0;
}