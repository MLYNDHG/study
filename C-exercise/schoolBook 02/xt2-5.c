#include<stdio.h>
#include<math.h>
int main(){
    printf("输入一个数");
    int num;
    scanf("%d",&num);
    float sum;
    for(int i=1;i<=num;i++){
        sum+=1.0*sqrt(i);
    }
    printf("前%d项的和为：%f",num,sum);
    getchar();
    getchar();
    return 0;
}