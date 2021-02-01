#include<stdio.h>
#include<math.h>
int main(void){
    FILE *fp1,*fp2;
    if((fp1=fopen("C:\\Study\\C-exercise\\schoolBook 12\\ct12-6-a.txt","r"))==NULL){
        printf("File open error!\n");
    }
    if((fp2=fopen("C:\\Study\\C-exercise\\schoolBook 12\\ct12-6-b.txt","w"))==NULL){
        printf("File open error!\n");
    }
    char ch;
    float num=0;
    while(!feof(fp1)){
        fscanf(fp1,"%f",&num);
        printf("%d\n",(int)(num+0.5));
        fprintf(fp2,"%d\n",(int)(num+0.5));
    }
    

    // feof(fp);返回0代表未结束
    if(fclose(fp1)){//0代表正常关闭文件
        printf("can not close file!\n");
    }
    // feof(fp);返回0代表未结束
    if(fclose(fp2)){//0代表正常关闭文件
        printf("can not close file!\n");
    }
    getchar();
    getchar();
}