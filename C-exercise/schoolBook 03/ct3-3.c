#include<stdio.h>
int main(){
    printf("����ѧ������");
    int num,count;
    float grade,sum=0;
    scanf("%d",&num);    
    for(int i=1;i<=num;i++){
        printf("�������%d��ѧ���ĳɼ�",i);
        scanf("%f",&grade);
        if(grade>=60){
            count++;
        }
        sum+=grade;
    }
    printf("ƽ���֣�%.1f,��������%d��",sum/num,count);
    getchar();
    getchar();
}