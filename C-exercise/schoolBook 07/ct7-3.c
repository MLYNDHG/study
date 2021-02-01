#include<stdio.h>
int main(void){
    int a[10];
    printf("输入1个数(1~10)\n");
    int n;
    scanf("%d",&n);    
    printf("输入%d个数\n",n);
    for(int i=0;i<n;i++){
        printf("请输入第%d个数字：",i+1);
        scanf("%d",&a[i]);
    }    
    int max=0,temp=0;    
    for(int i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }   
    for(int i=0;i<n;i++){
        printf("%d  ",a[i]);
    }   
    getchar();
    getchar();
    return 0;
}