#include<stdio.h>
#include<math.h>
float funcos(float e,float x);
int fact(int n);
int main(void){
    printf("���뾫�ȣ���������ֵ\n");
    float e,x;
    scanf("%f%f",&e,&x);
    printf("%f\n",funcos(e,x));
    printf("finish!\n");
    getchar();
    getchar();
    return 0;
}
float funcos(float e,float x){
    float n=1,sum=0;
    int i=0,flag=1;
    //�õ�������ֵĸ��� 
    while(fabs(n) >e){   
        n=pow(x,i)/fact(i)*flag;     
        sum+=n;                
        i+=2;
        flag=-flag;
    }
    return sum;
}
int fact(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    return sum;
}