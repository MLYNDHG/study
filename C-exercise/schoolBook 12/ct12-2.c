#include<stdio.h>
typedef struct {
    char username[30];
    char password[30];
}sysuser;
void encrypt(char *str);
int main(void){
    FILE *fp;
    if((fp=fopen("C:\\Study\\C-exercise\\schoolBook 12\\ct12-2.txt","a"))==NULL){
        printf("File open error!\n");
        exit(0);
    }
    char username[30];
    char password[30];
    for(int i=0;i<5;i++){
        printf("ÇëÊäÈëµÚ%d¸ö(username password):\n",i+1);
        scanf("%s%s",username,password);
        encrypt(password);
        fprintf(fp,"%s   %s\n",username,password);
    }    
    if(fclose(fp)){
        printf("can not close file!\n");
        exit(0);
    }
    return 0;
}
void encrypt(char *str){
    while(*str!='\0'){
        if(*str=='z'){
            *str='a';
        }else{
            *str=*str+1;
        }
        str++;
    }
}