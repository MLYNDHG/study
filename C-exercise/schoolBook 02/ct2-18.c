#include<stdio.h>
double fact(n);
int main(){
    printf("�������������ÿո����");
    int n,m;
    double kind;
    scanf("%d%d",&n,&m);
    if(m<=n){
        kind=fact(n)/(fact(m)*fact(n-m));
        printf("��%dȡ��%d�����Ϊ%d",n,m,(int)kind);
    }else{
        printf("Invail vaule");
    }
  
    getchar();
    getchar();
    getchar();
};
//����n�Ľײ�
double fact(n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    return sum;
}