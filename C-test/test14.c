#include<stdio.h>
static int wuhu(){
        int temp;//临时变量用来累加
        for(int i=1;i<=99;i++){//循环
            if(i%2!=0){//判断i是偶数还是奇数i   奇数累加
                // printf("%d",i);
                temp+=i;
            }            
        }
        printf("%d",temp);
        return 0;
}
int main(){
    wuhu();
    getchar();
}