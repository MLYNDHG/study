#include<stdio.h>
int main(void){
    printf("����һ����");
    float sum1=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        float sum2=0;
        for(int j=1;j<=i;j++){
            sum2+=j*1.0;
        }
        sum1+=1/(sum2)*1.0;
    }
    printf("%f",sum1);
    getchar();
    getchar();
    return 0;
}