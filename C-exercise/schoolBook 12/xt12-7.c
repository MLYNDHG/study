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
    printf("\n\n*********************���˵�*********************\n");
    printf("1.��ѯ�˻���Ϣ\n");
    printf("2.�����˻���Ϣ\n");
    printf("3.����˻���Ϣ\n");
    printf("0.�˳�ϵͳ\n");
    printf("***********************C************************\n");
    printf("��ѡ��:\n");
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
    // printf("��ǰ�˻�������%d\n",n);
    struct bankAccount account;
    printf("\n\n******************����˻���Ϣ*******************\n");
    printf("����������\n");
    scanf("%s",account.name);
    printf("�����뵱ǰ���\n");
    scanf("%lf",&account.balance);
    printf("***********************C************************\n");
    account.account=n+1;
    fwrite(&account,size,1,fp);
    printf("\n\n****������*****\n");
}
void queryaccount(FILE *fp){
    struct bankAccount account;
    fread(&account,size,1,fp);
    printf("\n\n******************�˻���¼*******************\n");
    printf("account\t\tname\t\tbalance\n");
    while(!feof(fp)){
        printf("%ld\t\t%s\t\t%lf\n",account.account,account.name,account.balance);
        fread(&account,size,1,fp);
    }
    printf("***********************C************************\n");
    printf("\n\n****��ѯ���*****\n");
}
void updatefile(FILE *fp){
    int myaccount;
    FILE *newfp;
    newfp=openfile("C:\\Study\\C-exercise\\schoolBook 12\\xt12-7_new.dat","wb");
    printf("\n\n******************�޸��˻���¼*******************\n");
    printf("������Ҫ�޸ĵ��˺�\n");
    scanf("%d",&myaccount);   
    struct bankAccount account;
    fread(&account,size,1,fp);
    while(!feof(fp)){
        if(account.account==myaccount){
            printf("�Ѿ��ҵ���ǰ��¼\n");
            printf("account\t\tname\t\tbalance\n");
            printf("%ld\t\t%s\t\t%lf\n",account.account,account.name,account.balance);
            printf("�������޸ĺ�����\n");
            scanf("%s",account.name);
            printf("�������޸ĺ����\n");
            scanf("%lf",&account.balance);
        }
        fwrite(&account,size,1,newfp);
        fread(&account,size,1,fp);
    }
    printf("***********************C************************\n");
    printf("\n\n****�޸����*****\n");
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