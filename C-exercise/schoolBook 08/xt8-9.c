#include<stdio.h>
int main(void){
    printf("����һ���ַ���\n");
    //��1��:��д��ĸ
    //��2��:Сд��ĸ
    //��3��:�ո�
    //��4��:����
    //��5��:�����ַ�
    char str[1000];
    static int flag[5];
    gets(str);
    for(int i=0;*(str+i)!='\0';i++){
        if(*(str+i)>='A'&&*(str+i)<='Z'){
            flag[0]++;
        }else if(*(str+i)>='a'&&*(str+i)<='z'){
            flag[1]++;
        }else if(*(str+i)==' '){
            flag[2]++;
        }else if((*(str+i))>='0'&&(*(str+i))<='9'){
            flag[3]++;
        }else{
            flag[4]++;
        }
    }
    
    printf("��д��ĸ:%d\n",*(flag));
    printf("Сд��ĸ:%d\n",*(flag+1));
    printf("�ո�:%d\n",*(flag+2));
    printf("����:%d\n",*(flag+3));
    printf("�����ַ�:%d\n",*(flag+4));
    getchar();
    getchar();
    return 0;
}