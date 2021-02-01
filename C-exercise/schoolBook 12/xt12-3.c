#include<stdio.h>
int main(void){
    //1.打开两个文件
    FILE *fp1,*fp2;
    if((fp1=fopen("C:\\Study\\C-exercise\\schoolBook 12\\xt12-3-a.txt","r"))==NULL){
        printf("File open error\n");
        exit(0);
    }
    if((fp2=fopen("C:\\Study\\C-exercise\\schoolBook 12\\xt12-3-b.txt","r"))==NULL){
        printf("File open error\n");
        exit(0);
    }
    //2.读取字符  作比较
    //3.记录\n的个数   记录列数  每次遇到\n  列数归零
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
    printf("行数：%d,列数：%d",row,col);
    getchar();
    getchar();
    return 0;
}