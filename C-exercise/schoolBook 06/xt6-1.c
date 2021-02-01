#include<stdio.h>
int main(void){
    int eng=0,space=0,num=0,other=0; 
    char ch;
    while((ch=getchar())!='\n'){
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
            eng++;
        }else if(ch==' '){
            space++;
        }else if(ch>='1'&&ch<='9'){
            num++;
        }else{
            other++;
        }
    }
    printf("英文字符：%d个\n空格：%d个\n数字：%d个\n其他字符：%d个\n",eng,space,num,other);
    getchar();
    getchar();
    return 0;
}
