/**
 * 输入5位学生的姓名及数学、英语成绩，输出平均分最高的学生的姓名及其数学和英语成绩。
*/
#include<stdio.h>
void main(){
    struct student{
        char name[100];
        float englishScore;
        float mathScore;
        float avg;
    } stu[5];
    float avg=0;
    int No=0,n=3;//n学生个数，No品均分最高的哪一位
    printf("输入五位学生的姓名、英语成绩、数学成绩");
    for(int i=0;i<n;i++){
        scanf("%s%f%f",stu[i].name,&stu[i].englishScore,&stu[i].mathScore);
    }

    for (int i = 0; i < n; i++)
    {        
        for(int j=0;j<n-i;j++){
            float s1=(stu[j].englishScore+stu[j].mathScore)/2;
            float s2=(stu[j+1].englishScore+stu[j+1].mathScore)/2;
            if(s1>s2){
                struct student s;
                s=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=s;
            }
        }       
    }
    
    printf("按照平均分由高到低排序\n");
    for(int i = 0; i < n; i++){
        float temp=(stu[i].englishScore+stu[i].mathScore)/2;
        if(avg<temp){
            avg=temp;
            No=i;
        }
        printf("%s\t%3.1f\t%3.1f\n",stu[i].name,stu[i].englishScore,stu[i].mathScore);
    }
    printf("平均分最高的是:%s,%3.1f分",stu[No].name,avg);
    getchar();
    getchar();
}