#include<stdio.h>
#include<stdlib.h>
int main(void){
    //�ȵõ��һ�еĳ���
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
    // printf("����ȣ�%d\n",max);
    if(fclose(fp)){
        printf("can not close file!\n");
        exit(0);
    }
    //���ݳ��ȶ�̬����һ���ַ�����
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
    //���ν�ÿ�з���������  �������е��ַ���forƥ��   ��ƥ�������������
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