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
    printf("������������ƽ���ɼ�\n");
    //��ʼ��
    for(int i=0;i<10;i++ ){  
        printf("NO.%d\n",i+1);
        scanf("%s%lf",&stu[i].name,&stu[i].average);
    }
    //����
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
    printf("��ߣ�%s  %.1lf\n",stu[0].name,stu[0].average);
    printf("��ͣ�%s  %.1lf\n",stu[9].name,stu[9].average);
    getchar();
    getchar();
    return 0;
}