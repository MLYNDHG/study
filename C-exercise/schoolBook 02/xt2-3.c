#include<stdio.h>
#include<math.h>
int main(){
    printf("��������������");
    int n,m;
    scanf("%d%d",&n,&m);
    float sum;
    if(n<=m&&n>0&&m>0){
        for(n;n<=m;n++){
            sum+=(pow(n,2)+1/(n*1.0));
        }
    }else{
        printf("Invail vaule!");
        return 0;
    }
    printf("���к�Ϊ��%.6f",sum);
    getchar();
    getchar();
    return 0;
}