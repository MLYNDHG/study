#include<stdio.h>
int main(){
    printf("����һ����");
    int num;
    scanf("%d",&num);
    float sum,temp;
    int flag=1;
    for(int i=1;i<=num;i++){
        sum+=1.0*i/(i*2-1)*flag;
        flag=-flag;
    }
    printf("ǰ%d��ĺ�Ϊ��%f",num,sum);
    getchar();
    getchar();
    return 0;
}