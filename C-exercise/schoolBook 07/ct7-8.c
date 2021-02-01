#include<stdio.h>
int main(void){
    int m,n;
    static int old[6][12],new[6][12];
    printf("输入移动位数m生成n阶矩阵(1~6)\n");    
    scanf("%d%d",&m,&n);
    printf("输入矩阵值\n"); 
    for(int j=0;j<n;j++){   
        for(int i=0;i<n;i++){         
            scanf("%d",&old[i][j]);
        }  
    }
    //打印原对照表
    for(int i=0;i<6;i++){
        for(int j=0;j<12;j++){
            printf("%d",old[i][j]);                  
        } 
        printf("\n");
    } 
    printf("\n");
    printf("\n");
    //向右移动
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             temp=old[i][j];
             new[i][j+m]=temp;                
        } 
    }    
     //打印原对照表
    for(int i=0;i<6;i++){
        for(int j=0;j<12;j++){
            printf("%d",new[i][j]);                  
        } 
        printf("\n");
    } 
    getchar();
    getchar();
    return 0;
}