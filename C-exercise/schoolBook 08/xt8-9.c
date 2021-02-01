#include<stdio.h>
int main(void){
    printf("输入一个字符串\n");
    //第1列:大写字母
    //第2列:小写字母
    //第3列:空格
    //第4列:数字
    //第5列:其他字符
    char str[1000];
    static int flag[5];
    gets(str);
    for(int i=0;*(str+i)!='\0';i++){
        if(*(str+i)>='A'&&*(str+i)<='Z'){
            flag[0]++;
        }else if(*(str+i)>='a'&&*(str+i)<='z'){
            flag[1]++;
        }else if(*(str+i)==' '){
            flag[2]++;
        }else if((*(str+i))>='0'&&(*(str+i))<='9'){
            flag[3]++;
        }else{
            flag[4]++;
        }
    }
    
    printf("大写字母:%d\n",*(flag));
    printf("小写字母:%d\n",*(flag+1));
    printf("空格:%d\n",*(flag+2));
    printf("数字:%d\n",*(flag+3));
    printf("其他字符:%d\n",*(flag+4));
    getchar();
    getchar();
    return 0;
}