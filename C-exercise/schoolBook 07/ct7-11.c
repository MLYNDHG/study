#include<stdio.h>
int main(void){
    printf("����һ���ַ���(�س�����������),�������");
    char str[80];
    int i=0,temp=0;
    printf("�����ַ�");
    while((str[i]=getchar())!='\n'){
        i++;
    }
    str[i]='\0';    
    //ԭ�ַ�����
    for(int j=0;j<i/2;j++){
        temp=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=temp;
    }
    i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    getchar();
    getchar();
    return 0;
}