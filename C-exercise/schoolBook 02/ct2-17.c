#include<stdio.h>
#include<math.h>
int main(){
    printf("输入一个数字");
    int n,power;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        power=pow(3,i);
        printf("pow(3,%d)=%d\n",i,power);
    }
    getchar();
    getchar();
}