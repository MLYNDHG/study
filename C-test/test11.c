#include<stdio.h>
#include<math.h>
int main(){
    int y[5]={1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
    {
        printf("%d  ",y[i]);
    }
    printf("\n");
    char c2[]={'\x10','\xa','\x8'};
    for (int i = 0; i < 3; i++)
    {
        printf("%d  ",c2[i]);
    }
    printf("\n");
    char s[]="\ta\018bc",*p=s;
    for (; *p!='\0';p++)
    {
        printf("*");
    }
    printf("\n");
    char x=3,t=6,z;
    printf("t<<2:%d\n",t<<2);
    z=x^t<<2;
    printf("x^24:%d\n",x^24);
    printf("ooo:%d",z);
    getchar();
    getchar();
    return 0;
}
