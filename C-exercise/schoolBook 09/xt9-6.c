#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int num;
    char name[10];
    int score;
    char grade[2];
} *stu;
void set_grade(struct student *stu);
int pass;
int main(void){
    printf("������Ҫ¼����ϵ�˵ĸ���\n");   
    int num; 
    scanf("%d",&num);
    if((stu=(struct student *)calloc(num,sizeof(struct student)))==NULL){
        printf("not able to allocate memory!");
    }else{
        printf("������ѧ�š��������ɼ�\n");
        for(int i=0;i<num;i++){
            printf("N0.%d\n",i+1);
            printf("ѧ�ţ�");
            scanf("%d",&((stu+i)->num));
            printf("������");
            scanf("%s",(stu+i)->name);
            printf("�ɼ���");
            scanf("%d",&((stu+i)->score));
            set_grade(stu+i);
        }
        for(int i=0;i<num;i++){
            printf("%d\t%s\t%d\t%s\n",(stu+i)->num,(stu+i)->name,(stu+i)->score,(stu+i)->grade);
        }
        printf("������������%d\n",pass);
    }
    free(stu);
    getchar();
    getchar();
}
void set_grade(struct student *s){
    if(stu->score>=85&&stu->score<=100){        
        strcpy(s->grade,"A");
    }else if(stu->score>=70&&stu->score<=84){
        strcpy(s->grade,"B");
    }else if(stu->score>=60&&stu->score<=69){
        strcpy(s->grade,"C");
    }else{
        strcpy(s->grade,"D"); 
        pass++;
    }
}