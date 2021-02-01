#include<stdio.h>
// int n=0;
double fun(n)
{ 
    double s=0.0,fac=1.0; int i;
    for(i=1;i<=n;i++)
    { 
        //fac=fac__________;
        // fac=i/fac;
        // s=s+fac;
        printf("%d  ",i);
    }
    return s;
}
double abc=10.111;
int argc;
char *argv;
int main(argc,argv){
    fun('a');
    int a=-1,b=0,m=1,n=1;
    do{
        if(a>0){
            m=2*n;b++;
        }else{
            n=m+n;
            a+=2;
            b++;
        }
    }while(a==b);
    // printf("m=%d n=%d",m,n);
    // printf("\n%f",fun(2));
    abc++;
    // printf("\n%f",abc);
    double x,y;
    // printf("\n%f",(x=2,y=x+3/2));
    int k=11;
    // printf("\n%d%o%x",k,k,k);

    printf("\n%d",(00010101&11111111));
    getchar();
    getchar();
    return 0;
}   