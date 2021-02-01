#include<stdio.h>
int main(void){
    printf("输入一行文本统计其中单词的个数\n");
    char ch,ago=0,count=1;//ago 0:空格 1:字符
    while((ch=getchar())!='\n'){
        if(ch==' '){
            if(ago){
                count++;
                ago=0;
            }
        }else{
            ago=1;
        }        
    }
    printf("单词的个数%d",count);
    getchar();
    getchar();
    return 0;
}