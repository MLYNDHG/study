#include<stdio.h>
#include<stdlib.h>
int main(void){
    void delchar(char *s,char c);
    printf("������һ���ַ�����\n"); 
    char str[1000];
    gets(str);   
    printf("������һ���ַ���\n");
    char ch;
    scanf("%c",&ch);   
    delchar(str,ch);
    puts(str);
    getchar();
    getchar();
    return 0;
}
void delchar(char *s,char c){
   char *ptr=s; 
   for(int i=0;*(ptr+i)!='\0';i++){
       if(*(ptr+i)==c){
            for(int j=i;*(ptr+j)!='\0';j++){
                *(s+j)=*(s+j+1);
            }
            i--;  
       }
   } 
}