#include<stdio.h>
int main(void){
    printf("输入一个字符串(回车符结束输入),逆向输出");
    char str[80];
    int i=0,temp=0;
    printf("输入字符");
    while((str[i]=getchar())!='\n'){
        i++;
    }
    str[i]='\0';    
    //原字符对照
    for(int j=0;j<i/2;j++){
        temp=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=temp;
    }
    i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    getchar();
    getchar();
    return 0;
}