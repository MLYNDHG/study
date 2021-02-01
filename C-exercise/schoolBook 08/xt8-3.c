#include<stdio.h>
#include<stdlib.h>
int main(void){
    void listMove(int list[],int n,int m);
    printf("请输入一个数生成数组：\n");
    int num,*ptr;
    scanf("%d",&num);
    if((ptr=(int *)calloc(num,sizeof(int)))==NULL){
        printf("not able to allocate memory!");
    }else{
        for(int i=0;i<num;i++){
            printf("请输入第%d个数字\n",i+1);
            scanf("%d",ptr+i);
        }
        int m;
        printf("请输入向后移动位数:\n");
        scanf("%d",&m);
        listMove(ptr,num,m);
    }
    free(ptr);
    getchar();
    getchar();
    return 0;
}
void listMove(int list[],int n,int m){
    //将数组各项向后移动m位溢出的部分向前移
    //先将后m位保存  再将数组整体后移  最后将保存的m位存入数组
    int *ptr;
    if((ptr=(int *)calloc(m,sizeof(int)))==NULL){
        printf("not able to allocate memory!");
    }else{
        for(int i=0;i<m;i++){
            *(ptr+i)=list[n-m+i];
        }
        for(int i=n;i>=m;i--){
            list[i]=list[i-m];
        }
        for(int i=0;i<m;i++){
            list[i]=*(ptr+i);
        }        
        for(int i=0;i<n;i++){
            printf("%d",list[i]);     
        }
    }
}