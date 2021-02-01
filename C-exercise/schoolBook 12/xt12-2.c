#include<stdio.h>
int main(void){
    FILE *fp;
    if((fp=fopen("C:\\Study\\C-exercise\\schoolBook 12\\xt12-2.txt","w"))==NULL){
        printf("file open error!\n");
    }
    int n;
    scanf("%d",&n);
    while(n!=-1){
      fprintf(fp,"%d ",n);
      scanf("%d",&n);
    } 
    if(fclose(fp)){
        printf("can close file!\n");
    }   
    getchar();
    getchar();
    return 0;
}