#include<stdio.h>
int main(){
    printf("����ʮ���ַ�");
    char ch;
    int english=0,space=0,enter=0,number=0,other=0;
    for(int i=0;i<10;i++){
        ch=getchar();
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            english++;
        }else if((ch>='0'&&ch<='9')){
            number++;
        }else if(ch=='\n'){
            enter++;
        }else if(ch==' '){
            space++;
        }else{
            other++;
        }
    }
    printf("Ӣ����ĸ����Ϊ��%d\n���ָ���Ϊ��%d\nenter����Ϊ��%d\n�ո����Ϊ��%d\n�����ַ�����Ϊ��%d",english,number,enter,space,other);
    getchar();
    getchar();
}