#include<stdio.h>
int main(void){
    FILE *fp;
    if((fp=fopen("C:\\Study\\C-exercise\\schoolBook 12\\ct12-5.txt","w"))==NULL){
        printf("File open error!\n");
    }
    printf("д������..........\n");
    char ch;
    while((ch=getchar())!='\n'){
        fputc(ch,fp);
    }    
    if(fclose(fp)){
        printf("can not close file!\n");
    }
    printf("д�����,�ѱ���..........\n");
    printf("���ڶ�ȡ..........\n");
    if((fp=fopen("C:\\Study\\C-exercise\\schoolBook 12\\ct12-5.txt","r"))==NULL){
        printf("File open error!\n");
    }
    while((ch=fgetc(fp))!=EOF){
        putchar(ch);
    }
    if(fclose(fp)){
        printf("can not close file!\n");
    }
    getchar();
    getchar();
    return 0;
}