#include<stdio.h>
int main(void){
    int eng=0,space=0,num=0,other=0; 
    char ch;
    while((ch=getchar())!='\n'){
        if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
            eng++;
        }else if(ch==' '){
            space++;
        }else if(ch>='1'&&ch<='9'){
            num++;
        }else{
            other++;
        }
    }
    printf("Ӣ���ַ���%d��\n�ո�%d��\n���֣�%d��\n�����ַ���%d��\n",eng,space,num,other);
    getchar();
    getchar();
    return 0;
}
