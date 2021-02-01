#include<stdio.h>
#include<math.h>
#define  S(a,b,c) ((a)+(b)+(c))/2
#define AREA(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))
int main(){
    printf("请输入三边的值\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float s=S(a,b,c);
    printf("s=%f,area=%f",s,AREA(s,a,b,c));
    getchar();
    getchar();
    return 0;
}