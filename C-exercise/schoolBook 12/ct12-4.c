#include<stdio.h>
int main(void){
    FILE *fp;
    if((fp=fopen("C:\\Study\\C-exercise\\schoolBook 12\\ct12-4.txt","r"))==NULL){
        printf("File open error!\n");
    }
    char ch;
    int enter=0;
    // while((ch=fgetc(fp))!=EOF){
    //     if(ch>='A'&&ch<='Z'){
    //         ch='a'+ch-'A';
    //     }
    //     if(ch=='\n'){
    //         enter++;
    //     }
    //     putchar(ch);
    // }
    while(!feof(fp)){
        ch=fgetc(fp);
        if(ch!=EOF){
            if(ch>='A'&&ch<='Z'){
                ch='a'+ch-'A';
            }
            if(ch=='\n'){
                enter++;
            }
            putchar(ch);
        }
    }
    // feof(fp);����0����δ����
    if(fclose(fp)){//0���������ر��ļ�
        printf("can not close file!\n");
    }
    printf("\n�س�������%d",enter);
    getchar();
    getchar();
}