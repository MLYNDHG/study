#include<stdio.h>
int main(void){
    printf("�����ַ�1~80���س�������");
    char str[80],i=0,count=0;
    while((str[i]=getchar())!='\n'){
        if(str[i]>='A'&&str[i]<='Z'){
            if(str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){
                count++;
            }
        }
        i++;
    }
    printf("���д�д������ĸ����Ϊ%d",count);
    getchar();
    getchar();
    return 0;
}