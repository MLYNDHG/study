#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct concat{
    char name[10];    
    char telephone[15];
    struct birthday{
        int year;
        int month;
        int day;
    } birthday;
    int age;
};
int getage(struct concat concat);
int main(void){
    struct concat *cp,temp;
    printf("������Ҫ¼����ϵ�˵ĸ���\n");
    int num;
    scanf("%d",&num);
    if((cp=(struct concat *)calloc(num,sizeof(struct concat)))==NULL){
        printf("not able to allocate memory!");
    }else{
        printf("�������������绰���롢��������\n");
        for(int i=0;i<num;i++){
            printf("N0.%d\n",i+1);
            printf("������");
            scanf("%s",(cp+i)->name);
            printf("�绰���룺");
            scanf("%s",(cp+i)->telephone);
            printf("������ݣ�");
            scanf("%d",&((cp+i)->birthday.year));
            printf("�����·ݣ�");
            scanf("%d",&((cp+i)->birthday.month));
            printf("�����շݣ�");
            scanf("%d",&((cp+i)->birthday.day));
            (cp+i)->age=getage(*(cp+i));
        }
        for(int i=0;i<num;i++){
            printf("%s\t%s\t%d-%d-%d\t%d\n",(cp+i)->name,(cp+i)->telephone,(cp+i)->birthday.year,(cp+i)->birthday.month,(cp+i)->birthday.day,(cp+i)->age);
        }
        printf("¼�����\n��������...................\n");
        _sleep(3000);
        int index=0;
        for(int i=0;i<num;i++){
            index=i;
            for(int j=i;j<num;j++){
               if(((cp+i)->age)<((cp+j)->age)){
                   index=j;
               } 
            }
            temp=*(cp+index);
            *(cp+index)=*(cp+i);
            *(cp+i)=temp;
        }
        printf("������ϵ���У�\n");
        for(int i=0;i<num;i++){
            printf("%s\t%s\t%d-%d-%d\n",(cp+i)->name,(cp+i)->telephone,(cp+i)->birthday.year,(cp+i)->birthday.month,(cp+i)->birthday.day);
        }
    }
    // free(cp);
    getchar();
    getchar();
    return 0;
}
int getage(struct concat concat){
    int age;
    time_t timep;
    struct tm *p;
    time (&timep);
    p=gmtime(&timep);
    //����һ����ǰ���ڵ��������ڵ�  ����ֵ
    int bir=concat.birthday.year*10000+concat.birthday.month*100+concat.birthday.day;    
    int now=(1900+p->tm_year)*10000+(1+p->tm_mon)*100+(p->tm_mday);
    age=now-bir;
    return age;
}
