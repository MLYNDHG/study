#include<stdio.h>
int sum(int n);
int main(){

    return 0;
}
int sum(int n){
    int result=0;
    if(n==1){
        //�ݹ����
        result+=1; 
    }else{
        //�ݹ�ʽ��
        result=sum(n-1)+n;
    }
    return result;
}