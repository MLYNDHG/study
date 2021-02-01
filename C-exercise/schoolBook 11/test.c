#include<stdio.h>
int main()
{
    int a[12]={1,2,3,4,5,6,7,8,9,10,11,12},*p[4],i;
    for(i=0;i<4;i++){
        p[i]=&a[i*3];
    }
    for(i=0;i<12;i++){
        printf("%d",p[0][i]);
    }
    getchar();
    getchar();
    return 0;
}