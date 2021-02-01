// #define JH(a,b,t) 
// #include<stdio.h>
// int main(void){
//     // int a=1,b=2,t=3;
//     // int t;
//     // JH(a,b,t);  //-->t=a;a=b;b=t;   tœ»±®¥Ì
    
//     // printf("%d%d%d",a,b,t);
//     getchar();
//     getchar();
//     return 0;
// }


#include<stdio.h>
int main(){
    int n=1,a,x=0,pi=1;
    a=(n%2==0?-1:1);
    for (n=1 ;n<=100;n++)
        x=x+a/(2*n-1);
    pi=4*x;
    printf("%ld\n" ,pi);
    getchar();
    getchar();
    return 0;
}

