#include<stdio.h>
struct student{
    int num;
    char name[10];
    int english,chinese,math;
    double average;
};
int main(void){ 
    printf("输入学生人数");
    int personnumber;
    double english,chinese,math;
    struct student s,max;
    scanf("%d",&personnumber);
    printf("请输入学号、姓名、英语、语文、数学成绩\n");
    for(int i=0;i<personnumber;i++){        
        printf("NO.%d",i+1);
        scanf("%d%s%d%d%d",&s.num,&s.name,&s.english,&s.chinese,&s.math);
        english+= s.english;
        chinese+= s.chinese;
        math+= s.math;
        s.average=1.0*(s.english+s.chinese+s.math)/3;
        if(i==0) max=s;
        if(s.average>max.average){
            max=s;
        }
    }
    printf("英语平均分：%.2lf\n语文平均分：%.2lf\n数学平均分：%.2lf\n",english/personnumber,chinese/personnumber,math/personnumber);
    printf("最高平均分：%.2lf\n",max.average);
    getchar();
    getchar();
    return 0;
}