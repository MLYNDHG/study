#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int circlestr(char *str);
int main(void){
    printf("������һ���ַ���\n");
    char *ptr;
    if((ptr=(int *)calloc(1000,sizeof(char)))==NULL){
        printf("not able to allocate memory!");
    }else{
        gets(ptr);
        puts(ptr);
        if(circlestr(ptr)){
            printf("��һ������");
        }else{
            printf("����һ������");
        }
    }
    getchar();
    getchar();
    return 0;
}
//�ж��ǲ��ǻ���  1��  0��
int circlestr(char *str){
    int flag;
    char *head,*last;
    head=str;
    last=str+strlen(str)-1;
    while(head<last&&*head==*last){
        head++;
        last--;
    }
    if(head<last){
        flag=0;
    }else{
        flag=1;
    }
    return flag;
}