#include<stdio.h>
int main(void){
    printf("��������������(1~6)\n");
    int n,m,a[6][6],max=0;
    scanf("%d%d",&n,&m);
    printf("��¼��%d��������\n",n*m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int lineAddition[6];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            lineAddition[i]+=a[i][j];
        }
    }
    for(int i=0;i<n;i++){        
        printf("��%d�еĺͣ�%d\n",i,lineAddition[i]);        
    }
    getchar();
    getchar();
    return 0;
}