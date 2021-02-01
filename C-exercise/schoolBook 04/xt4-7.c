#include<stdio.h>
int main(void){
    printf("输入两个数求其最大公约数、最小公倍数");
    int n,m;
    scanf("%d%d",&n,&m);
    //最大公约数
    int nYmax,mYmax,realYmax=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            nYmax=i;
        }
        for(int j=2;j<=m;j++){
            if(m%j==0){
                mYmax=j;
            }
            if(nYmax==mYmax&&realYmax<=nYmax){
                realYmax=nYmax;
            }
        }
    }      
    //最大公倍数
    int nBmax=n,mBmax,realBmax=0;
    for(int i=1;realBmax==0;i++){
        nBmax=n*i;
        for(int j=1;realBmax==0;j++){
            mBmax=m*j;
            if(nBmax==mBmax){
                realBmax=nBmax;
                break;
            }else if(nBmax<mBmax){
                break;
            }
        }
    }
    printf("%d与%d最大公约数是：%d\n",n,m,realYmax);
    printf("%d与%d最大公倍数是：%d",n,m,realBmax);
    getchar();
    getchar();
    return 0;
}