#include<stdio.h>
#include<string.h>
int main(void){
    printf("输入一个字符串(不可留有空格)");
    char str[100],myStr[4];
    scanf("%s",str);
    if(strlen(str)<4){
        printf("Error字符太少");
    }else{
        //取出前三个字符   然后使用strcat从第四个开始于前三个链接即可
        int i;
        for(i=0;i<3;i++){
            myStr[i]=str[i];
        }    
        myStr[i]='\0';
        //将其他字符向前移动三个位置
        for(i=3;i<strlen(str);i++){
            str[i-3]=str[i];
        }
        str[i-3]='\0';
        strcat(str,myStr);
        printf("%s",str);        
    }    
    getchar();
    getchar();
    return 0;
}