#include<stdio.h>
#include<stdlib.h>
struct LogData{
    long logid;
    char logdata[11];
    char lognote[15];
    double charge;
    double balance;
};
long size=sizeof(struct LogData);
char fileAddress[80]="C:\\Study\\C-exercise\\schoolBook 12\\ct12-7.dat";
char momentAddress[80]="C:\\Study\\C-exercise\\schoolBook 12\\moment.dat";
void close(FILE *fp){
    if(fclose(fp)){
        printf("can not close file\n");
        exit(0);
    }
}
int inputchoice(){
    int n;
    printf("enter your choice:\n");
    printf("1-Add a new cash log.\n");
    printf("2-List all cash log.\n");
    printf("3-Query last cash log.\n");
    printf("4-Update a old cash log.\n");
    printf("5-Remove cache.\n");
    printf("0-End program\n");
    scanf("%d",&n);
    return n;
}
long getLogCount(FILE *fp){
    long begin,end,logcount;
    fseek(fp,0L,SEEK_SET);
    begin=ftell(fp);
    fseek(fp,size,SEEK_END);
    end=ftell(fp);
    logcount=(end-begin)/size-1;
    return logcount;
}
void AddNewLog(FILE * fp){
    struct LogData lastData,curData;
    //��Ҫ�õ���ǰ��¼��
    long count=getLogCount(fp);
    printf("�������������(������2020-11-11)\n");
    scanf("%s",&curData.logdata);
    printf("��������˱�ע\n");
    scanf("%s",curData.lognote);
    printf("��������˽��(�棺+,�ã�-)\n");
    scanf("%lf",&curData.charge);
    if(count>0){
        //�м�¼��õ����һ�����ݣ�ʹ����Id��
        fseek(fp,(count-1)*size,SEEK_SET);
        fread(&lastData,size,1,fp);
        curData.logid=lastData.logid+1;
        curData.balance=lastData.balance+curData.charge;
    }else{
        //�޼�¼��ֱ�ӽ��µ�д��IdΪ1
        curData.logid=1;
        curData.balance=curData.charge;
    }
    rewind(fp);
    //д���ļ�
    fwrite(&curData,size,1,fp);
}
FILE *OpenFile(char *str,char *model){
    FILE *fp;
    if((fp=fopen(str,model))==NULL){
        printf("File open error!\n");
        exit(0);
    }
    return fp;
}
void LogList(FILE *fp){
    //����ʼλ��  ÿ��ȡһ��������ƶ�һ��
    struct LogData temp;       
    fseek(fp,0L,SEEK_SET);
    printf("LogId\t\tCreateDate\t\tNote\t\tCharge\t\tBalance\n");
    fread(&temp,size,1,fp);
    while(!feof(fp)){       
        printf("%ld\t\t%s\t\t%s\t\t%lf\t\t%lf\n",temp.logid,temp.logdata,temp.lognote,temp.charge,temp.balance);                
        fread(&temp,size,1,fp);
    }
}
struct LogData Loglast(FILE *fp){
    struct LogData temp;    
    long count=getLogCount(fp);
    fseek(fp,size*(count-1),SEEK_SET);
    fread(&temp,size,1,fp);
    printf("the last log\n");
    printf("LogId\t\tCreateDate\t\tNote\t\tCharge\t\tBalance\n");
    printf("%ld\t\t%s\t\t%s\t\t%lf\t\t%lf\n",temp.logid,temp.logdata,temp.lognote,temp.charge,temp.balance);
    return temp;
}
void updatelog(FILE *fp){
    //��������һ���ļ����޸�
    //���� ����Ч���ݴӵ�ǰ�ļ��������ļ���
    //������ļ�ɾ��   ���ļ�����ΪԴ�ļ���
    FILE *newfp;
    newfp=OpenFile(momentAddress,"w");
    printf("����Ҫ�޸ĵ�����id\n");
    long oldId;
    int flag=0;
    int count=0;
    double minus=0;
    struct LogData temp,curData,lastData;
    scanf("%ld",&oldId);
    fseek(fp,0L,SEEK_SET);
    fread(&temp,size,1,fp);
    while(!feof(fp)){
        count++;        
        if(temp.logid==oldId){
            flag=1;
            printf("�Ѽ�������\n");
            printf("��ǰ��ϢΪ��\n");
            printf("LogId\t\tCreateDate\t\tNote\t\tCharge\t\tBalance\n");
            printf("%ld\t\t%s\t\t%s\t\t%lf\t\t%lf\n",temp.logid,temp.logdata,temp.lognote,temp.charge,temp.balance);                
            printf("�Ƿ�����޸�(1/0)\n");
            int p;
            scanf("%d",&p);
            if(p){
                printf("�������������(������2020-11-11)\n");
                scanf("%s",&curData.logdata);
                printf("��������˱�ע\n");
                scanf("%s",curData.lognote);
                printf("��������˽��(�棺+,�ã�-)\n");
                scanf("%lf",&curData.charge);
                curData.logid=temp.logid;
                //���ʱ��  �����log����Ҫ�ı�ֱ��д�뼴��
                if(curData.charge==temp.charge){
                    temp=curData;
                    flag=0;
                }else{ //�����ʱ  ����޸ĺ���ԭֵ�Ĳ�
                    curData.balance=temp.balance-temp.charge+curData.charge;
                    minus=curData.charge-temp.charge;             
                    temp=curData;
                    fwrite(&temp,size,1,newfp);
                    goto end;
                }
                
            }         
        }
        //δ������ʱ  ���Ƶ����ļ�����
        if(!flag){
            fwrite(&temp,size,1,newfp);
        }else{
        //��������   �����ֵ��Ҫ�����޸�����������ļ�
            temp.balance+=minus;
            fwrite(&temp,size,1,newfp);
        }
        end:
        fread(&temp,size,1,fp);
    }
    close(fp);
    close(newfp);
    myremove(fileAddress);
    rename(momentAddress,fileAddress);
}
void myremove(char *str){    
     remove(fileAddress);
}
int main(void){
    int n;
    FILE *fp;
    printf("Welcome to cash Log!!!\n");
    while((n=inputchoice())!=0){
        system("cls");
        switch(n){
            case 1:
                //�ȴ��ļ�
                fp=OpenFile(fileAddress,"ab+");
                //����Add���ļ����������
                system("cls");
                AddNewLog(fp);
                break;
            case 2:
                //���ļ�
                fp=OpenFile(fileAddress,"rb");
                //��������
                system("cls");
                LogList(fp);
                break;
            case 3:
                //���ļ�
                fp=OpenFile(fileAddress,"rb");
                //����һ��
                system("cls");
                Loglast(fp);                
                break;
            case 4:
                //���ļ�
                fp=OpenFile(fileAddress,"ab+");
                //�޸�����һ������
                updatelog(fp);
                system("cls");
                fp=OpenFile(fileAddress,"rb");
                break;
            case 5:        
                myremove(fileAddress);
                break;
        }
        //ÿ�β�����ɶ�Ҫ�ر���ǿ�Ʊ�������
        close(fp);
    }
    
    return 0;
}