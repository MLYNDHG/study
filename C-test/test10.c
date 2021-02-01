#include<stdio.h>
#include<math.h>
int main(){
    // int a=1,b=0;
    // if(!a)b++;
    // else if(a==0)
    // if(a)b+=2;
    // else b+=3;
    // printf("%d",b);

    int a=1,b=2,c=3;
    if(a++<b){c=a;a=b;b=c;}
    else a=b=c=0;
    printf("%d%d%d",a,b,c);

    float f1=1.0,f2=-2.0;
    printf("f2=%f,fabs(f2)>f1=%d",f2+=f1,fabs(f2)>f1);
    getchar();
    getchar();
    return 0;
}
