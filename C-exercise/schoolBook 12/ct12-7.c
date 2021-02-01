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
    //先要得到当前记录数
    long count=getLogCount(fp);
    printf("请输入记账日期(格数：2020-11-11)\n");
    scanf("%s",&curData.logdata);
    printf("请输入记账备注\n");
    scanf("%s",curData.lognote);
    printf("请输入记账金额(存：+,用：-)\n");
    scanf("%lf",&curData.charge);
    if(count>0){
        //有记录则得到最后一条数据（使用其Id）
        fseek(fp,(count-1)*size,SEEK_SET);
        fread(&lastData,size,1,fp);
        curData.logid=lastData.logid+1;
        curData.balance=lastData.balance+curData.charge;
    }else{
        //无记录则直接将新的写入Id为1
        curData.logid=1;
        curData.balance=curData.charge;
    }
    rewind(fp);
    //写入文件
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
    //从起始位置  每读取一个就向后移动一个
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
    //并不能在一个文件中修改
    //所以 将有效数据从当前文件读到新文件中
    //最后将老文件删除   新文件改名为源文件名
    FILE *newfp;
    newfp=OpenFile(momentAddress,"w");
    printf("输入要修改的数据id\n");
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
            printf("已检索到：\n");
            printf("当前信息为：\n");
            printf("LogId\t\tCreateDate\t\tNote\t\tCharge\t\tBalance\n");
            printf("%ld\t\t%s\t\t%s\t\t%lf\t\t%lf\n",temp.logid,temp.logdata,temp.lognote,temp.charge,temp.balance);                
            printf("是否进行修改(1/0)\n");
            int p;
            scanf("%d",&p);
            if(p){
                printf("请输入记账日期(格数：2020-11-11)\n");
                scanf("%s",&curData.logdata);
                printf("请输入记账备注\n");
                scanf("%s",curData.lognote);
                printf("请输入记账金额(存：+,用：-)\n");
                scanf("%lf",&curData.charge);
                curData.logid=temp.logid;
                //相等时则  后面的log余额不需要改变直接写入即可
                if(curData.charge==temp.charge){
                    temp=curData;
                    flag=0;
                }else{ //不相等时  算出修改后与原值的差
                    curData.balance=temp.balance-temp.charge+curData.charge;
                    minus=curData.charge-temp.charge;             
                    temp=curData;
                    fwrite(&temp,size,1,newfp);
                    goto end;
                }
                
            }         
        }
        //未索引到时  复制到新文件即可
        if(!flag){
            fwrite(&temp,size,1,newfp);
        }else{
        //检索到后   后面的值都要进行修改再添加入新文件
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
                //先打开文件
                fp=OpenFile(fileAddress,"ab+");
                //调用Add往文件里添加数据
                system("cls");
                AddNewLog(fp);
                break;
            case 2:
                //打开文件
                fp=OpenFile(fileAddress,"rb");
                //读出所有
                system("cls");
                LogList(fp);
                break;
            case 3:
                //打开文件
                fp=OpenFile(fileAddress,"rb");
                //读出一条
                system("cls");
                Loglast(fp);                
                break;
            case 4:
                //打开文件
                fp=OpenFile(fileAddress,"ab+");
                //修改其中一条数据
                updatelog(fp);
                system("cls");
                fp=OpenFile(fileAddress,"rb");
                break;
            case 5:        
                myremove(fileAddress);
                break;
        }
        //每次操作完成都要关闭来强制保存数据
        close(fp);
    }
    
    return 0;
}