#include<stdio.h>
#include<stdlib.h>
int main(void){
    int search(int list[],int n,int x);
    printf("请输入一个数:\n");    
    int num;
    scanf("%d",&num);
    int *ptr;
    if((ptr=(int *)calloc(num,sizeof(int)))==NULL){        
        printf("not able to allocate memory!");
    }else{
        for(int i=0;i<num;i++){
            printf("请输入第%d个整数\n",i+1);
            scanf("%d",ptr+i);
        }
        int x;
        printf("请输入要查找的数字:\n");
        scanf("%d",&x);
        int result=search(ptr,num,x);
        if(result==-1){
            printf("not found");
        }else{
            printf("在数组中下标为：%d",result);
        }
    }    
    getchar();
    getchar();
    return 0;
}
int search(int list[],int n,int x){    
    for(int i=0;i<n;i++){
        if(list[i]==x){
            return i;
        }
    }
    return -1;
};