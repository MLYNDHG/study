#include<stdio.h>
#include<stdlib.h>
int main(void){
    void listMove(int list[],int n,int m);
    printf("������һ�����������飺\n");
    int num,*ptr;
    scanf("%d",&num);
    if((ptr=(int *)calloc(num,sizeof(int)))==NULL){
        printf("not able to allocate memory!");
    }else{
        for(int i=0;i<num;i++){
            printf("�������%d������\n",i+1);
            scanf("%d",ptr+i);
        }
        int m;
        printf("����������ƶ�λ��:\n");
        scanf("%d",&m);
        listMove(ptr,num,m);
    }
    free(ptr);
    getchar();
    getchar();
    return 0;
}
void listMove(int list[],int n,int m){
    //�������������ƶ�mλ����Ĳ�����ǰ��
    //�Ƚ���mλ����  �ٽ������������  ��󽫱����mλ��������
    int *ptr;
    if((ptr=(int *)calloc(m,sizeof(int)))==NULL){
        printf("not able to allocate memory!");
    }else{
        for(int i=0;i<m;i++){
            *(ptr+i)=list[n-m+i];
        }
        for(int i=n;i>=m;i--){
            list[i]=list[i-m];
        }
        for(int i=0;i<m;i++){
            list[i]=*(ptr+i);
        }        
        for(int i=0;i<n;i++){
            printf("%d",list[i]);     
        }
    }
}