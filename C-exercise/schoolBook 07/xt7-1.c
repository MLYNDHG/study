#include<stdio.h>
int main(void){
    printf("输入一个正整数\n");
    int n,a[10],max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("请输入第%d个整数",i+1);
        scanf("%d",&a[i]);
    }    
    //循环一次将最大值放到到第一个，下一次循环这一个不参加
    for(int i=0;i<n;i++){
        max=0;        
        for(int j=i;j<n;j++){
            if(max<a[j]){
                max=a[j];
                a[j]=a[i];
                a[i]=max;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);      
    } 
    getchar();
    getchar();
    return 0;
}