#include<stdio.h>
int main(void){
    printf("����һ���ַ�");
    char ch,str[80];
    scanf("%c\n",&ch);
    printf("\n");
    int i=0,index=0;
    printf("�����ַ���(�س�����������)");
    while((str[i]=getchar())!='\n'){
        if(ch==str[i]){
            index=i;
        }
        i++;
    }
    str[i]='\0';
    if(index){
        printf("����±�%d",index);
    }else{
        printf("NOT FOUND");
    }    
    getchar();
    getchar();
    return 0;
}