/**
 * 1-100�б�6���������������ĺ�
*/
#include<stdio.h>
void main(){
    int sum=0;
    for(int i=1;i<=100;i++){
        if(i%6==0){           
            sum+=i;
        }
    }
    printf("1-100�б�6���������������ĺ�Ϊ%d",sum);
    getchar();
}