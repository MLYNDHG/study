#include<stdio.h>
#include<math.h>
int main(void){ 
    printf("����һ����,����ȷ���㵽���е����һ��ľ���ֵС�ڸ���");    
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