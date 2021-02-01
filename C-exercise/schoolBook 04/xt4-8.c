#include<stdio.h>
int main(void){
    printf("请输入落下高度与反弹次数");
    float height,temp,sum;
    int n;
    scanf("%f%d",&height,&n);
    temp=height;
    for(int i=0;i<=n;i++){
        sum+=temp;
        temp=height/2;
    }
    printf("皮球从%.2fm落下反弹%d次，反弹的高度为%.1f",height,n,sum);
    getchar();
    getchar();
}