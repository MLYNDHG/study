#include<stdio.h>
int pyramid(int m);
int main(void){
    printf("����һ����");
    int a;
    scanf("%d",&a);
    pyramid(a);
    getchar();
    getchar();
    return 0;
}
int pyramid(int n){
    int sum;
    //�ܼ�n��
    for(int i=1;i<=n;i++){
        //��ÿһ�еĲ���  
        //�ÿո񶥿�
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    } 
     for(int i=n-1;i>=1;i--){
        //��ÿһ�еĲ���  
        //�ÿո񶥿�
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }   
};
