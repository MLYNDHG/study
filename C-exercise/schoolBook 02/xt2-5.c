#include<stdio.h>
#include<math.h>
int main(){
    printf("����һ����");
    int num;
    scanf("%d",&num);
    float sum;
    for(int i=1;i<=num;i++){
        sum+=1.0*sqrt(i);
    }
    printf("ǰ%d��ĺ�Ϊ��%f",num,sum);
    getchar();
    getchar();
    return 0;
}