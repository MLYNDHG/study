#include<stdio.h>
int main(){
    printf("输入十个字符");
    char ch;
    int english=0,space=0,enter=0,number=0,other=0;
    for(int i=0;i<10;i++){
        ch=getchar();
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            english++;
        }else if((ch>='0'&&ch<='9')){
            number++;
        }else if(ch=='\n'){
            enter++;
        }else if(ch==' '){
            space++;
        }else{
            other++;
        }
    }
    printf("英文字母个数为：%d\n数字个数为：%d\nenter个数为：%d\n空格个数为：%d\n其他字符个数为：%d",english,number,enter,space,other);
    getchar();
    getchar();
}