#include<stdio.h>
int main(void){
    printf("���������¸߶��뷴������");
    float height,temp,sum;
    int n;
    scanf("%f%d",&height,&n);
    temp=height;
    for(int i=0;i<=n;i++){
        sum+=temp;
        temp=height/2;
    }
    printf("Ƥ���%.2fm���·���%d�Σ������ĸ߶�Ϊ%.1f",height,n,sum);
    getchar();
    getchar();
}