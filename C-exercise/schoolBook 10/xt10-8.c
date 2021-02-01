#include<stdio.h>
int output(int n);
int main(void){
    int n;
    printf("Input?n:");
    scanf("%d",&n);
    printf("°´Î»Ë³ÐòÊä³ö£º%d\n",output(n));

    getchar();
    getchar();
    return 0;
}

int output(int n){
    if(n>=0&&n<10){
       return n;
    }else{
        return(output(n/10)*10+n%10);
    }
}