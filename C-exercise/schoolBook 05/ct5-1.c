#include<stdio.h>
int sumSingle(int n);
int sumParent(int m,int n);
int main(void){
    printf("����һ����");
    int n,m;
    scanf("%d",&n);
    printf("%d",sum(n));
    getchar();
    getchar();
    return 0;
}
int sumSingle(int n){
    int sum;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
};

int sumParent(int m,int n){
    int sum;
    for(int i=m;i<=n;i++){
        sum+=i;
    }
    return sum;
};