#include<stdio.h>
#include<math.h>
int main(void){
    printf("����һ��ʵ��\n");
    double x,sum=1,item;
    int i=1;
    scanf("%le",&x);    
    double fact(n);
    item=x;
    while(fabs(item)>=0.00001){                        
        item=pow(x,i)/fact(i);
        sum+=item;        
        i++;
    }
    printf("�ܺ�Ϊ��%f",sum);
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