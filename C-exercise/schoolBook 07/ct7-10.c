#include<stdio.h>
int main(void){
    printf("输入一个字符");
    char ch,str[80];
    scanf("%c\n",&ch);
    printf("\n");
    int i=0,index=0;
    printf("输入字符串(回车符结束输入)");
    while((str[i]=getchar())!='\n'){
        if(ch==str[i]){
            index=i;
        }
        i++;
    }
    str[i]='\0';
    if(index){
        printf("最大下标%d",index);
    }else{
        printf("NOT FOUND");
    }    
    getchar();
    getchar();
    return 0;
}