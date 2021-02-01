/**
 * 1-100中被6整除的所有整数的和
*/
#include<stdio.h>
void main(){
    int sum=0;
    for(int i=1;i<=100;i++){
        if(i%6==0){           
            sum+=i;
        }
    }
    printf("1-100中被6整除的所有整数的和为%d",sum);
    getchar();
}