#include<stdio.h>
#include<stdlib.h>
int main(void){
    void bubble(int a[],int n);
    printf("请输入一个整数");
    int n;
    scanf("%d",&n);    
    //使用动态内存分配得到一个数组
    int *ptr;
    if((ptr=(int *)calloc(n,sizeof(int)))==NULL){
        printf("not able to alloate memory\n");
    }else{
        for(int i=0;i<n;i++){
            printf("请输入第%d个整数",i+1);
            scanf("%d",ptr+i);            
        }
        printf("排序后：");
        bubble(ptr,n);
        for(int i=0;i<n;i++){
            printf("%3d",*(ptr+i));            
        }
        getchar();
        getchar();
    }    
    return 0;
}
void bubble(int a[],int n){
    int min,temp;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}