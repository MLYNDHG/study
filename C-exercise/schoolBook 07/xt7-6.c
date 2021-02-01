#include<stdio.h>
int main(void){
    printf("输入字符1~80（回车结束）");
    char str[80],i=0,count=0;
    while((str[i]=getchar())!='\n'){
        if(str[i]>='A'&&str[i]<='Z'){
            if(str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){
                count++;
            }
        }
        i++;
    }
    printf("其中大写辅音字母个数为%d",count);
    getchar();
    getchar();
    return 0;
}