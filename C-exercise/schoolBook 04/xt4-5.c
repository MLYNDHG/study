#include<stdio.h>
int main(void){
    printf("输入一个数（8-100）之间");
    int money;
    scanf("%d",&money);
    int fen5,fen2,fen1,count;
    fen5=money/5;
    fen2=money/2;
    fen1=money;
    for(int i=fen5;i>0;i--){
        for(int j=fen2;j>0;j--){
            for(int k=fen1;k>0;k--){
                if((i>0&&j>0&&k>0)&&(5*i+2*j+k==money)){
                    count++;
                    printf("5分的：%d个,2分的：%d个,1分的：%d个,总数:%d个\n",i,j,k,i+j+k);
                }                
            }   
        }   
    }
    printf("共有%d种换法",count);
    getchar();
    getchar();
    return 0;
}