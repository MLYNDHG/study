#include<stdio.h>
int main(void){
    printf("����һ��������(1~6)\n");
    int n,a[6][6],max=0;
    scanf("%d",&n);
    printf("��¼��%d��������\n",n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(i>j&&a[i][j]!=0){
                 flag=0;
             }
        }
    }
    if(!flag){
        printf("����һ�������Ǿ���");
    }else{
        printf("��һ�������Ǿ���");
    }
    getchar();
    getchar();
    return 0;
}