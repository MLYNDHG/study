#include<stdio.h>
int main(){
    printf("����һ����");
    int n;
    scanf("%d",&n);
    float sum;
    for(int i=1;i<=n;i++){
        sum=sum+1/(i*1.0);//�˴�ע��Ҫ��iת��һ�·���1����i֮���õ��㣨�������룩
    }
    printf("%f",sum);
    getchar();
    getchar();
    getchar();
    return 0;
}