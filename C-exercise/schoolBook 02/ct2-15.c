#include<stdio.h>
int main(){
    printf("����һ����");
    int n;
    scanf("%d",&n);
    float sum,flag=1;
    for(int i=1;i<=n;i++){
        sum=sum+(1/(((i-1)*3+1)*1.0))*flag;//�˴�ע��Ҫ��iת��һ�·���1����i֮���õ��㣨�������룩
        flag=-flag;
    }
    printf("%f",sum);
    getchar();
    getchar();
    getchar();
    return 0;
}