#include<stdio.h>
struct student{
    int num;
    char name[10];
    int age;
};
int main(void){
    struct student *ps1,s1;
    ps1=&s1;
    printf("输入学号、姓名、年龄\n");
    scanf("%d%s%d",&(ps1->num),ps1->name,&(ps1->age));
    printf("%d%s%d",ps1->num,ps1->name,ps1->age);
    getchar();
    getchar();
    return 0;
}