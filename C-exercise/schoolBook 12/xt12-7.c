#include<stdio.h>
#include<stdlib.h>
struct bankAccount{
    int account;
    char name[20];
    double balance;
};
char *path="C:\\Study\\C-exercise\\schoolBook 12\\xt12-7.dat";
int size=sizeof(struct bankAccount);
FILE *openfile(char *path,char *mod){
    FILE *fp;
    if((fp=fopen(path,mod))==NULL){
        printf("file open error!\n");
        exit(0);
    }
    return fp;
}
void closefile(FILE *fp){
    if(fclose(fp)){
        printf("can not close file!\n");
        exit(0);
    }
}
int inputNotice(){
    printf("\n\n*********************主菜单*********************\n");
    printf("1.查询账户信息\n");
    printf("2.更新账户信息\n");
    printf("3.添加账户信息\n");
    printf("0.退出系统\n");
    printf("***********************C************************\n");
    printf("请选择:\n");
    int num;
    scanf("%d",&num);
    return num;
}
long getcount(FILE *fp){
    long begin,end;
    int n=0;
    fseek(fp,0L,SEEK_SET);
    begin=ftell(fp);
    fseek(fp,0L,SEEK_END);
    end=ftell(fp);
    n=(end-begin)/size;
    return n;
}
void addlist(FILE *fp){
    int n=getcount(fp);
    // printf("当前账户数量：%d\n",n);
    struct bankAccount account;
    printf("\n\n******************添加账户信息*******************\n");
    printf("请输入姓名\n");
    scanf("%s",account.name);
    printf("请输入当前余额\n");
    scanf("%lf",&account.balance);
    printf("***********************C************************\n");
    account.account=n+1;
    fwrite(&account,size,1,fp);
    printf("\n\n****添加完毕*****\n");
}
void queryaccount(FILE *fp){
    struct bankAccount account;
    fread(&account,size,1,fp);
    printf("\n\n******************账户记录*******************\n");
    printf("account\t\tname\t\tbalance\n");
    while(!feof(fp)){
        printf("%ld\t\t%s\t\t%lf\n",account.account,account.name,account.balance);
        fread(&account,size,1,fp);
    }
    printf("***********************C************************\n");
    printf("\n\n****查询完毕*****\n");
}
void updatefile(FILE *fp){
    int myaccount;
    FILE *newfp;
    newfp=openfile("C:\\Study\\C-exercise\\schoolBook 12\\xt12-7_new.dat","wb");
    printf("\n\n******************修改账户记录*******************\n");
    printf("请输入要修改的账号\n");
    scanf("%d",&myaccount);   
    struct bankAccount account;
    fread(&account,size,1,fp);
    while(!feof(fp)){
        if(account.account==myaccount){
            printf("已经找到当前记录\n");
            printf("account\t\tname\t\tbalance\n");
            printf("%ld\t\t%s\t\t%lf\n",account.account,account.name,account.balance);
            printf("请输入修改后姓名\n");
            scanf("%s",account.name);
            printf("请输入修改后余额\n");
            scanf("%lf",&account.balance);
        }
        fwrite(&account,size,1,newfp);
        fread(&account,size,1,fp);
    }
    printf("***********************C************************\n");
    printf("\n\n****修改完毕*****\n");
    closefile(fp);
    closefile(newfp);
    remove(path);
    rename("C:\\Study\\C-exercise\\schoolBook 12\\xt12-7_new.dat",path);
}
int main(void){
    int num;
    FILE *fp;
    while((num=inputNotice())!=0){
        switch(num){
            case 1:
                system("cls");
                fp=openfile(path,"rb");
                queryaccount(fp);
                closefile(fp);
                break;
            case 2:
                system("cls");
                fp=openfile(path,"rb");
                updatefile(fp);
                fp=openfile(path,"rb");
                closefile(fp);
                break;
            case 3: 
                system("cls");
                fp=openfile(path,"ab+");
                addlist(fp);
                closefile(fp);
                break;
        }
    }
    return 0;
}