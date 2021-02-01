#define MAX(a,b,c) (a>b)?((a>c)?a:c):((b>c)?b:c)
#include<stdio.h>
int main(void){
    printf("输入三个数字\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    return 0;
}
//static  静态全局变量   静态全局函数
//可保护当前文件模块中的全局变量与函数
//不被其他文件所引用

//extern
static int woc;
static int max(int a,int b,int c){
    int max;
    if(a>b){
        if(a>c){
           max=a; 
        }else{
            max=c;
        }
    }else{
        if(b>c){
            max=b;
        }else{
            max=c;
        }
    }

}