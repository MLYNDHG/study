#include<stdio.h>
struct stduent{
    int num;
    char name[10];
    char sex[4];
    int age;
};
int main(void){
    struct stduent stu[5];
    printf("请输入学号、姓名、性别、年龄\n");
    for(int i=0;i<2;i++ ){  
        printf("NO.%d\n",i+1);
        scanf("%d%s%s%d",&stu[i].num,&stu[i].name,&stu[i].sex,&stu[i].age);
    }    
    for(int i=0;i<2;i++ ){  
        printf("NO.%d:%d  %s  %s  %d\n",i+1,stu[i].num,stu[i].name,stu[i].sex,stu[i].age);        
    }
    getchar();
    getchar();
    return 0;
}