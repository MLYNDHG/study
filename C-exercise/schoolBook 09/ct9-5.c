#include<stdio.h>
struct student{
    int num;
    char name[10];
    char sex[4];
    int age;
    double average;
};
int main(void){
    struct student stu[10];
    printf("请输入姓名、平均成绩\n");
    //初始化
    for(int i=0;i<10;i++ ){  
        printf("NO.%d\n",i+1);
        scanf("%s%lf",&stu[i].name,&stu[i].average);
    }
    //排序
    int index;
    struct student stemp;
    for(int i=0;i<10;i++ ){  
        index=i;
        for(int j=i;j<10;j++ ){  
            if(stu[i].average<stu[j].average){
                index=j;
            }
        }
        stemp=stu[index];
        stu[index]=stu[i];
        stu[i]=stemp;
    }
    for(int i=0;i<10;i++ ){  
        printf("NO.%d:%s  %.1lf\n",i+1,stu[i].name,stu[i].average);        
    }
    printf("最高：%s  %.1lf\n",stu[0].name,stu[0].average);
    printf("最低：%s  %.1lf\n",stu[9].name,stu[9].average);
    getchar();
    getchar();
    return 0;
}