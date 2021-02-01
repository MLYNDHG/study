#include<stdio.h>
#include<string.h>
typedef struct {
    int num;
    char name[20];
    int score;
} student;
int main(void){
    FILE *fp;
    //打开文件
    if((fp=fopen("C:\\Study\\C-exercise\\schoolBook 12\\ct12-1.txt","r"))==NULL){
        printf("File open error!\n");
    }
    int num,score,totalscore=0;
    char name[100];
    student stu[8],temp;
    for(int i=0;i<8;i++){
        fscanf(fp,"%ld%s%ld",&num,name,&score);
        totalscore+=score;
        stu[i].num=num;        
        strcpy(stu[i].name,name);
        stu[i].score=score;
        printf("%d\t%s\t%d\n",num,name,score);
    }
    printf("平均分:%f\n\n",totalscore*1.0/8);
    for(int i=0;i<8;i++){
        for(int j=i;j<8;j++){
            if(stu[i].score<stu[j].score){
                temp=stu[j];
                stu[j]=stu[i];
                stu[i]=temp;
            }
        }   
    }
    for(int j=0;j<8;j++){
        printf("%d\t%s\t%d\n",stu[j].score,stu[j].name,stu[j].num);
    }   
    printf("最高:%d\t%s\t%d\n",stu[0].score,stu[0].name,stu[0].num);
    printf("最低:%d\t%s\t%d\n",stu[7].score,stu[7].name,stu[7].num);
    getchar();
    getchar();
    if(fclose(fp)){
        printf("can not close the file!\n");
        exit(0);
    }
    return 0;
}
