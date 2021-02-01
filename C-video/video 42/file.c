/**
 * 文件的操作
 * 1.创建文件指针
 * 2.打开文件
 * 3.读写文件
 * 4.关闭文件
*/
#include<stdio.h>
void main(){
    FILE *fa,*fb;  
    char ch;
    fa=fopen("C:\\Study\\video 42\\love.txt","r");
    fb=fopen("C:\\Study\\video 42\\love2.txt","w");
    ch=fgetc(fa);
    fputc(ch,fb);
    while(!feof(fa)){
       fputc( fgetc(fa),fb);
    }
    // fscanf();
    fclose(fa);
    fclose(fb);
}