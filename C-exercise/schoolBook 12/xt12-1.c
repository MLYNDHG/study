#include<stdio.h>
int main(void){
    FILE *fp;
    if((fp=fopen("C:\\Study\\C-exercise\\schoolBook 12\\xt12-1.txt","r"))==NULL){
        printf("file open error!\n");
    }
    char ch;
    int e=0,n=0,i=0;
    while(!feof(fp)){
        ch=fgetc(fp);
        if(ch!=EOF){
            putchar(ch);
        }
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
            e++;
        }else if(ch>='0'&&ch<='9'){
            n++;
        }else{
            i++;
        }
    }
    printf("Ӣ���ַ���%d��\n���֣�%d��\n�����ַ���%d��",e,n,i);
    getchar();
    getchar();
    return 0;
}