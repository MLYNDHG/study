#include<stdio.h>
int main(void){
    printf("����һ������8-100��֮��");
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
                    printf("5�ֵģ�%d��,2�ֵģ�%d��,1�ֵģ�%d��,����:%d��\n",i,j,k,i+j+k);
                }                
            }   
        }   
    }
    printf("����%d�ֻ���",count);
    getchar();
    getchar();
    return 0;
}