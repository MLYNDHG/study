#include<stdio.h>
int main(void){
    int a[6][6],n,sum;
    printf("��������n����n�׾���(1~6)\n");    
    scanf("%d",&n);
    printf("�������ֵ\n"); 
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
    printf("��ȥ���һ�����һ�и��Խ��ߵĺ�%d\n",sum);          
    getchar();
    getchar();
    return 0;
}