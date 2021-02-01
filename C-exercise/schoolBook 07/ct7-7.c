#include<stdio.h>
int main(void){
    int a[6][6],n,sum;
    printf("输入数字n生成n阶矩阵(1~6)\n");    
    scanf("%d",&n);
    printf("输入矩阵值\n"); 
    for(int j=0;j<n;j++){   
        for(int i=0;i<n;i++){         
            scanf("%d",&a[i][j]);
        }  
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=n-1&&j!=n-1&&(i+j!=n-1)){
                sum+=a[i][j];
            }                       
        } 
    }    
    printf("除去最后一列最后一行副对角线的和%d\n",sum);          
    getchar();
    getchar();
    return 0;
}