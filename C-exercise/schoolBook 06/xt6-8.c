#include<stdio.h>
int main(void){
    printf("����һ���ı�ͳ�����е��ʵĸ���\n");
    char ch,ago=0,count=1;//ago 0:�ո� 1:�ַ�
    while((ch=getchar())!='\n'){
        if(ch==' '){
            if(ago){
                count++;
                ago=0;
            }
        }else{
            ago=1;
        }        
    }
    printf("���ʵĸ���%d",count);
    getchar();
    getchar();
    return 0;
}