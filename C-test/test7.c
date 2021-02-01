#include<stdio.h>
int main(){
    FILE *fp;
    int n,a[2]={65,66};
    char ch;
    fp=fopen("d.dat","w");
    fprintf(fp,"%d%d",a[0],a[1]);
    fclose(fp);
    fp=fopen("d.dat","r");
    fscanf(fp,"%c",&ch);
    n=ch;
    while(n!=0){
        printf("%d",n%10);
        n=n/10;
    }
    fclose(fp);
    getchar();
    getchar();
    return 0;
}