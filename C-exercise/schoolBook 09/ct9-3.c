#include<stdio.h>
struct student{
    int num;
    char name[10];
    int english,chinese,math;
    double average;
};
int main(void){ 
    printf("����ѧ������");
    int personnumber;
    double english,chinese,math;
    struct student s,max;
    scanf("%d",&personnumber);
    printf("������ѧ�š�������Ӣ����ġ���ѧ�ɼ�\n");
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
    printf("Ӣ��ƽ���֣�%.2lf\n����ƽ���֣�%.2lf\n��ѧƽ���֣�%.2lf\n",english/personnumber,chinese/personnumber,math/personnumber);
    printf("���ƽ���֣�%.2lf\n",max.average);
    getchar();
    getchar();
    return 0;
}