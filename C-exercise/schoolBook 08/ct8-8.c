#include<stdio.h>
#include<string.h>
int main(void){
    printf("����һ���ַ���(�������пո�)");
    char str[100],myStr[4];
    scanf("%s",str);
    if(strlen(str)<4){
        printf("Error�ַ�̫��");
    }else{
        //ȡ��ǰ�����ַ�   Ȼ��ʹ��strcat�ӵ��ĸ���ʼ��ǰ�������Ӽ���
        int i;
        for(i=0;i<3;i++){
            myStr[i]=str[i];
        }    
        myStr[i]='\0';
        //�������ַ���ǰ�ƶ�����λ��
        for(i=3;i<strlen(str);i++){
            str[i-3]=str[i];
        }
        str[i-3]='\0';
        strcat(str,myStr);
        printf("%s",str);        
    }    
    getchar();
    getchar();
    return 0;
}