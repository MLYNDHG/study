#include<stdio.h>
int main(void){
    printf("输入两个数（1~500），寻找两个数字之间所有素数的和\n");
    int n,m,zhisu,flag=0;
    scanf("%d%d",&n,&m);
    if((n>=1&&n<=500)&&(m>=1&&m<=500)){
        for(int j=n;j<=m;j++){
            flag=1;//是否是质数标识
            for(int i=2;i<j;i++){
                
                if(j%i==0){
                    flag=0;
                    break;
                }
            }
            if(flag&&j!=1){
                zhisu+=j;
            }
        }
        printf("%d到%d之间所有质数的和%d",n,m,zhisu);
    }else{
        printf("Eception too big");
    }
    getchar();
    getchar();
    return 0;
}