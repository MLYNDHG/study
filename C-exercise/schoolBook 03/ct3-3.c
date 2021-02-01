#include<stdio.h>
int main(){
    printf("输入学生人数");
    int num,count;
    float grade,sum=0;
    scanf("%d",&num);    
    for(int i=1;i<=num;i++){
        printf("请输入第%d个学生的成绩",i);
        scanf("%f",&grade);
        if(grade>=60){
            count++;
        }
        sum+=grade;
    }
    printf("平均分：%.1f,及格人数%d人",sum/num,count);
    getchar();
    getchar();
}