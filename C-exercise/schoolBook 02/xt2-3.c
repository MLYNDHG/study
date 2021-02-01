#include<stdio.h>
#include<math.h>
int main(){
    printf("输入两个正整数");
    int n,m;
    scanf("%d%d",&n,&m);
    float sum;
    if(n<=m&&n>0&&m>0){
        for(n;n<=m;n++){
            sum+=(pow(n,2)+1/(n*1.0));
        }
    }else{
        printf("Invail vaule!");
        return 0;
    }
    printf("序列和为：%.6f",sum);
    getchar();
    getchar();
    return 0;
}