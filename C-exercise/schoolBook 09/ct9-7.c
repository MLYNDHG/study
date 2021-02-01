#include<stdio.h>
#include<string.h>
struct student{
    int num;
    char name[10];
    int average_score;
};
int update_score(struct student stu[],int num,char *s,int average_score);
int main(void){
    struct student stu[5],changeTemp;
    printf("请输入学生学号、姓名、平均分\n");
    for(int i=0;i<5;i++){
        printf("NO.%d",i+1);
        scanf("%d%s%d",&stu[i].num,stu[i].name,&stu[i].average_score);
    }
    printf("学号\t姓名\t平均分\n");
    for(int i=0;i<5;i++){
        printf("%d\t%s\t%d\n",stu[i].num,stu[i].name,stu[i].average_score);
    }
    printf("请输入要修改学生的学号、姓名、平均分");
    scanf("%d%s%d",&changeTemp.num,changeTemp.name,&changeTemp.average_score);
    int i=update_score(stu,changeTemp.num,changeTemp.name,changeTemp.average_score);
    printf("已经修改，下标为:%d\n",i);
    for(int i=0;i<5;i++){
        printf("%d\t%s\t%d\n",stu[i].num,stu[i].name,stu[i].average_score);
    }
    getchar();
    getchar();
    return 0;
}
int update_score(struct student stu[],int num,char *s,int average_score){
    int id;
    for(int i=0;i<5;i++){
        if(stu[i].num==num){
            stu[i].average_score=average_score;
            strcpy(stu[i].name,s);
            id=i;
        }
    }
    return id;
}