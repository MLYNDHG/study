#include<stdio.h>
int main(void){
    //二进制文件
    //先将若干整数写入二进制文件（int结构类型）
    FILE *fp;
    if((fp=fopen("C:\\Study\\C-exercise\\schoolBook 12\\xt12-4.dat","wb"))==NULL){
        printf("File open error!\n");
    }
    printf("请输入若干整数！(-1结束)\n");
    int num,size=sizeof(int),sum;
    scanf("%d",&num);
    while(num!=-1){
        //fwrite方式写入
        fwrite(&num,size,1,fp);
        scanf("%d",&num);
    }
    if(fclose(fp)){
        printf("can not close file!\n");
    }
    if((fp=fopen("C:\\Study\\C-exercise\\schoolBook 12\\xt12-4.dat","ab+"))==NULL){
        printf("File open error!\n");
    }
    //读取二进制文件将整数求和
    fread(&num,size,1,fp);
    while(!feof(fp)){
        sum+=num;
        printf("%d\n",num);
        fread(&num,size,1,fp);
    }
    fwrite(&sum,size,1,fp);
    if(fclose(fp)){
        printf("can not close file!\n");
    }
    if((fp=fopen("C:\\Study\\C-exercise\\schoolBook 12\\xt12-4.dat","rb"))==NULL){
        printf("File open error!\n");
    }
    //
    printf("最后结果\n");
    //读取二进制文件将整数求和
    fread(&num,size,1,fp);
    while(!feof(fp)){
        sum+=num;
        printf("%d\n",num);
        fread(&num,size,1,fp);
    }
    if(fclose(fp)){
        printf("can not close file!\n");
    }
    getchar();
    getchar();
    //写入文件末尾
    return 0;
}