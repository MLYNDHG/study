#include<stdio.h>
int sum(int n);
int main(){

    return 0;
}
int sum(int n){
    int result=0;
    if(n==1){
        //递归出口
        result+=1; 
    }else{
        //递归式子
        result=sum(n-1)+n;
    }
    return result;
}