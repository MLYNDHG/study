//输出英文月份
#include<stdio.h>
void translate(int m);
void main(){
    int m;
    printf("请输入数字月份");
end:
    scanf("%d",&m);
    if(m>=1&&m<=12){
        translate(m);
    }
    goto
        end;    
}
void translate(int m){
    char *month[]={"January","February","March","April","May",
    "June","July","August","September","October","November","December"};
    printf("%d:%s\n",m,month[m-1]);
}