#include<stdio.h>
#include<math.h>
int main(void){ 
    printf("输入一个数,将精确计算到序列的最后一项的绝对值小于该数");    
    float eps,item=1.0,temp,i=1;
    scanf("%f",&eps);
    int flag=1;
    while(fabs(item)>=eps){
        temp+=item;
        flag=-flag;
        item=1/((3*i)+1)*flag;        
        i++;
    }
    printf("%.6f",temp);
    getchar();
    getchar();
}