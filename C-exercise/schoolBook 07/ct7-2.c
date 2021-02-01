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
    int max=0,flag=0,index=0;    
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            index=i;
            flag=1;
        }
    }
    if(!flag){
        printf("NOT FOUND");
    }else{
        printf("max=%d,minIndex is%d",max,index);
    }
    getchar();
    getchar();
    return 0;
}