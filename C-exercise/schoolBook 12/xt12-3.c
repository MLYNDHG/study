#include<stdio.h>
int main(void){
    //1.�������ļ�
    FILE *fp1,*fp2;
    if((fp1=fopen("C:\\Study\\C-exercise\\schoolBook 12\\xt12-3-a.txt","r"))==NULL){
        printf("File open error\n");
        exit(0);
    }
    if((fp2=fopen("C:\\Study\\C-exercise\\schoolBook 12\\xt12-3-b.txt","r"))==NULL){
        printf("File open error\n");
        exit(0);
    }
    //2.��ȡ�ַ�  ���Ƚ�
    //3.��¼\n�ĸ���   ��¼����  ÿ������\n  ��������
    char ch1,ch2;
    int col=1,row=1;
    while(!feof(fp1)&&!feof(fp2)){
        ch1=fgetc(fp1);
        ch2=fgetc(fp2);
        if(ch1!=EOF&&ch2!=EOF){         
            if(ch1==ch2){
                if(ch1=='\n') {
                    row++,col=0;
                }else{
                    col++;
                }
            }else{
                col++;
                break;
            }
        }
    }
    printf("������%d,������%d",row,col);
    getchar();
    getchar();
    return 0;
}