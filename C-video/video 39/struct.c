/**
 * ����5λѧ������������ѧ��Ӣ��ɼ������ƽ������ߵ�ѧ��������������ѧ��Ӣ��ɼ���
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
    int No=0,n=3;//nѧ��������NoƷ������ߵ���һλ
    printf("������λѧ����������Ӣ��ɼ�����ѧ�ɼ�");
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
    
    printf("����ƽ�����ɸߵ�������\n");
    for(int i = 0; i < n; i++){
        float temp=(stu[i].englishScore+stu[i].mathScore)/2;
        if(avg<temp){
            avg=temp;
            No=i;
        }
        printf("%s\t%3.1f\t%3.1f\n",stu[i].name,stu[i].englishScore,stu[i].mathScore);
    }
    printf("ƽ������ߵ���:%s,%3.1f��",stu[No].name,avg);
    getchar();
    getchar();
}