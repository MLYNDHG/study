#include<stdio.h>
int main(void){
    printf("��������������");
    int a,n,sum,singleItem;
    scanf("%d%d",&a,&n);
    for(int i=1;i<=n;i++){
        singleItem=0;
        for(int j=0;j<i;j++){
            singleItem=(singleItem*10)+a;
        }
        sum+=singleItem;
    }
    printf("���к�Ϊ��%d",sum);
    getchar();
    getchar();
    return 0;
}