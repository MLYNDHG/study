#include<stdio.h>
#define Max(x,y)  (x)>(y)?(x):(y)
int main(){
    int a=5,b=2,c=3,d=3,t;
    t=Max((a+b),(c+d))*10;

    printf("%d",t);
    getchar();
    getchar();
    return 0;
}