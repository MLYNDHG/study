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
    printf("������ѧ��ѧ�š�������ƽ����\n");
    for(int i=0;i<5;i++){
        printf("NO.%d",i+1);
        scanf("%d%s%d",&stu[i].num,stu[i].name,&stu[i].average_score);
    }
    printf("ѧ��\t����\tƽ����\n");
    for(int i=0;i<5;i++){
        printf("%d\t%s\t%d\n",stu[i].num,stu[i].name,stu[i].average_score);
    }
    printf("������Ҫ�޸�ѧ����ѧ�š�������ƽ����");
    scanf("%d%s%d",&changeTemp.num,changeTemp.name,&changeTemp.average_score);
    int i=update_score(stu,changeTemp.num,changeTemp.name,changeTemp.average_score);
    printf("�Ѿ��޸ģ��±�Ϊ:%d\n",i);
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