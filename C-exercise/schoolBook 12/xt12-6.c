//先得到最长一行的长度
#include<stdio.h>
#include<string.h>
int main(void){
    //先得到最长一行的长度
    FILE *fp1,*fp2;
    if((fp1=fopen("C:\\Study\\C-exercise\\schoolBook 12\\xt12-6.c","r"))==NULL){
        printf("File open error!\n");
        exit(0);
    }
    if((fp2=fopen("C:\\Study\\C-exercise\\schoolBook 12\\new_xt12-6.c","w"))==NULL){
        printf("File open error!\n");
        exit(0);
    }
    char prech,ch,note1=0;
    int flag=1;
    for(int i=0;!feof(fp1);i++){
        ch=fgetc(fp1);
        if(ch!=EOF){                
            if(i==0){
                prech=ch;
                if(prech=='/'){
                    ch=fgetc(fp1);
                    if(ch!='/'){
                        fputc(prech,fp2);
                    }
                }
                if(prech=='/'&&ch=='/'){
                    flag=0;
                }
            }else{
                if(ch=='/'){
                    prech=ch;
                    ch=fgetc(fp1);
                    if(ch!='/'){
                        fputc(prech,fp2);
                    }
                }
                if(prech=='/'&&ch=='/'){
                    flag=0;
                }
                prech=ch;
                
            }            
            if(ch=='\n'){
                if(flag==0){
                    flag=1;  
                    continue;
                }  
                flag=1;              
            }
            if(flag==0){
                continue;
            }
            fputc(ch,fp2);
        }        
    }
    if(fclose(fp1)){
        printf("can not close file!\n");
        exit(0);
    }
    if(fclose(fp2)){
        printf("can not close file!\n");
        exit(0);
    }
    printf("去除注释已经完成！\n");
    getchar();
    getchar();
    return 0;
}