#include<stdio.h>
#define MAX

int main(){

    int x=12,y=34;
    char z='a';
    printf("%d",x,y);
    printf("%c",z);
    switch (x)
    {
    case 12:
        printf("aa");
    switch (y)
    {
    case 34:
       printf("bb");
        break;
    
    default:
        break;
    }
    default:
        break;
    }

    int t=0;
    int a1=93;
    int a2=240;
    int c1;
    c1=a1^a2;
    printf("%d",c1);
    getchar();
    getchar();
    return 0;
}