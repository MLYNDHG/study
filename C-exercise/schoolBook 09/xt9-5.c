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
    printf("请输入要录入联系人的个数\n");
    int num;
    scanf("%d",&num);
    if((cp=(struct concat *)calloc(num,sizeof(struct concat)))==NULL){
        printf("not able to allocate memory!");
    }else{
        printf("请输入姓名、电话号码、出生年月\n");
        for(int i=0;i<num;i++){
            printf("N0.%d\n",i+1);
            printf("姓名：");
            scanf("%s",(cp+i)->name);
            printf("电话号码：");
            scanf("%s",(cp+i)->telephone);
            printf("出生年份：");
            scanf("%d",&((cp+i)->birthday.year));
            printf("出生月份：");
            scanf("%d",&((cp+i)->birthday.month));
            printf("出生日份：");
            scanf("%d",&((cp+i)->birthday.day));
            (cp+i)->age=getage(*(cp+i));
        }
        for(int i=0;i<num;i++){
            printf("%s\t%s\t%d-%d-%d\t%d\n",(cp+i)->name,(cp+i)->telephone,(cp+i)->birthday.year,(cp+i)->birthday.month,(cp+i)->birthday.day,(cp+i)->age);
        }
        printf("录入完毕\n正在排序...................\n");
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
        printf("您的联系人有：\n");
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
    //返回一个当前日期到出生日期的  编码值
    int bir=concat.birthday.year*10000+concat.birthday.month*100+concat.birthday.day;    
    int now=(1900+p->tm_year)*10000+(1+p->tm_mon)*100+(p->tm_mday);
    age=now-bir;
    return age;
}
