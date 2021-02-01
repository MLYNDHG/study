#include<stdio.h>
/**
 * Q:转义字符\c的输出效果
 * A:不存在的转义字符将忽略掉\
*/
int main(){
    printf("包含转义字符\c");
    getchar();//防止cmd一闪即逝  等待字符输入
};