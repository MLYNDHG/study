#include<stdio.h>
int main(){
    int a[12]={1,2,3,4,5,6,7,8,9,10,11,12},*p[3],**pp,b;    
    for(int i=0;i<3;i++){
        p[i]=&a[i*4];
    }
    for(int i=0;i<8;i++){
        printf("%d",p[1][i]);
    }
    


    // char *p,*q;
    // p="asdasdas";
    // // scanf("%s",p);
    // q="asdasdas";
    // printf("%d",sizeof(p));
    // float a=5.5*1+2*1+2;
    // printf("%f",a);
    getchar();
    getchar();
    return 0;
}