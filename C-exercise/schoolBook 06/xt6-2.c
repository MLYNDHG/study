#include<stdio.h>
int fn(int basic,int repeat);
int main(void){
    printf("输入两个正整数");
    int basic,repeat,sum=0;
    scanf("%d%d",&basic,&repeat);
    for(int i=1;i<=repeat;i++){        
        sum+=fn(basic,i);
    }
    printf("%d",sum);
    getchar();
    getchar();

}
int fn(int basic,int repeat){
    int total=basic;
    for(int i=1;i<repeat;i++){
        total=total*10+basic;
    }
    return total;
}