/**
 * �ļ��Ĳ���
 * 1.�����ļ�ָ��
 * 2.���ļ�
 * 3.��д�ļ�
 * 4.�ر��ļ�
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