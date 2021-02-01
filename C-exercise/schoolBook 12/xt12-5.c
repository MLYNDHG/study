#include<stdio.h>
#include<stdlib.h>
int main(void){
    //先得到最长一行的长度
    FILE *fp;
    if((fp=fopen("C:\\Study\\C-exercise\\schoolBook 12\\xt12-5.txt","r"))==NULL){
        printf("File open error!\n");
        exit(0);
    }
    char ch;
    int max=0,i;
    while(!feof(fp)){
        ch=fgetc(fp);
        if(ch!=EOF){
            // printf("%c",ch);
            if(ch=='\n'){
                if(max<i){
                    max=i;
                }
                i=0;
                continue;
            }            
            i++;
        }
    }
    // printf("最长长度：%d\n",max);
    if(fclose(fp)){
        printf("can not close file!\n");
        exit(0);
    }
    //根据长度动态分配一个字符数组
    char *s;
    if((s=(char *)calloc(sizeof(char),max))==NULL){
        printf("No memory to alloc\n");
    }
    if((fp=fopen("C:\\Study\\C-exercise\\schoolBook 12\\xt12-5.txt","r"))==NULL){
        printf("File open error!\n");
        exit(0);
    }
    int n=0;
    char wh[6]="while";
    //依次将每行放入数组中  对数组中的字符与for匹配   不匹配配则清空数组
    int k=0;
    int x=0;
    while(!feof(fp)){
        ch=fgetc(fp);
        if(ch!=EOF){
            // printf("%c",ch);
            *(s+n)=ch;
            n++;
            if(ch=='\n'){
                k=0;
                int flag=0;
                char cam;
                while((cam=(*(s+k)))!='\n'){
                    if(cam=='w'){
                        flag=1;
                        x=0;
                        while((*(wh+x))!='\0'){
                            if((*(s+k))!=(*(wh+x))){
                                flag=0;
                                break;
                            }
                            k++;
                            x++;
                        }
                    } 
                    if(flag==1){
                        break;
                    }
                    k++;                   
                }
                if(flag){
                    printf("%s",s);
                }
                for(int i=0;i<max;i++){
                    *(s+i)='\0';
                }
                n=0;
            }
        }
    }
    if(fclose(fp)){
        printf("can not close file!\n");
        exit(0);
    }
    getchar();
    getchar();
    return 0;
}