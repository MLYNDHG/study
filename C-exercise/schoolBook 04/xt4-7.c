#include<stdio.h>
int main(void){
    printf("�����������������Լ������С������");
    int n,m;
    scanf("%d%d",&n,&m);
    //���Լ��
    int nYmax,mYmax,realYmax=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            nYmax=i;
        }
        for(int j=2;j<=m;j++){
            if(m%j==0){
                mYmax=j;
            }
            if(nYmax==mYmax&&realYmax<=nYmax){
                realYmax=nYmax;
            }
        }
    }      
    //��󹫱���
    int nBmax=n,mBmax,realBmax=0;
    for(int i=1;realBmax==0;i++){
        nBmax=n*i;
        for(int j=1;realBmax==0;j++){
            mBmax=m*j;
            if(nBmax==mBmax){
                realBmax=nBmax;
                break;
            }else if(nBmax<mBmax){
                break;
            }
        }
    }
    printf("%d��%d���Լ���ǣ�%d\n",n,m,realYmax);
    printf("%d��%d��󹫱����ǣ�%d",n,m,realBmax);
    getchar();
    getchar();
    return 0;
}