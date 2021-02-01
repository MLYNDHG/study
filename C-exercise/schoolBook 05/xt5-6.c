#include<stdio.h>
#include<math.h>
int waterflowernum(int x);
int main(void){
    printf("输入两个数，输出之间水仙花数的个数\n");
    int n,m;
    scanf("%d%d",&n,&m);    
    for(int i=n;i<=m;i++){        
        if(waterflowernum(i)){
            printf("%d\n",i);
        }
    }    
    printf("finish!\n");
    getchar();
    getchar();
    return 0;
}
int waterflowernum(int x){
    int n=x,count=0,sum=0;
    //得到这个数字的个数 
    while(n>0){
        n=n/10;
        count++;
    }
    n=x;
    //计算每一位数字的count次方等于x
    while(n>0){
        sum+=pow(n%10,count);
        n=n/10;
    }
    if(sum==x){
        return 1;
    }
    return 0;
}