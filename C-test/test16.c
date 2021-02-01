#include<stdio.h>
static int wuhu(){
    int a,b,c,i;
    for(i=100;i<1000;i++)
    {
        a=i/100;
        b=i%100/10;
        c=i%10;
        if(a*a*a+b*b*b+c*c*c==i)
        printf("%d\t",i);
    }
}
int main(){
    wuhu();
    getchar();
}