#include<stdio.h>
int main(void){
    FILE *fp1,*fp2;
    //���ļ�1
    if((fp1=fopen("C:\\Study\\C-exercise\\schoolBook 12\\ct12-2.txt","r"))==NULL){
        printf("File open error!\n");
        exit(0);
    }
    //���ļ�2
    if((fp2=fopen("C:\\Study\\C-exercise\\schoolBook 12\\ct12-3.txt","w"))==NULL){
        printf("File open error!\n");
        exit(0);
    }
    //�����ļ�
    char ch;
    int n=0;
    while(!feof(fp1)){
        ch=fgetc(fp1);
        if(ch!=EOF){
            fputc(ch,fp2);
            n++;
        }
    }
    //�ر��ļ�1
    if(fclose(fp1)){
        printf("can not close file!\n");
    }
    //�ر��ļ�2
    if(fclose(fp2)){
        printf("can not close file!\n");
    }
    return 0;
}