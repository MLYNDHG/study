#include<stdio.h>
double fact(n);
int main(){
    printf("����һ����");
    int num;
    scanf("%d",&num);
    float sum;
    for(int i=1;i<=num;i++){
        sum+=fact(i);
    }
    printf("ǰ%d��ĺ�Ϊ��%.0f",num,sum);
    getchar();
    getchar();
    return 0;
}
double fact(n){
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}