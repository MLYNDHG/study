#include<stdio.h>
int main(void){
    int a[5];
    printf("输入五个数\n");
    for(int i=0;i<5;i++){
        printf("请输入第%d个数字：",i+1);
        scanf("%d",&a[i]);
    }
    printf("请输入要查找的数字：");
    int x,flag=0;
    scanf("%d",&x);
    for(int i=0;i<5;i++){
        if(a[i]==x){
            printf("Index is %d\n",i);
            flag=1;
        }
    }
    if(!flag){
        printf("NOT FOUND");
    }
    getchar();
    getchar();
    return 0;
}