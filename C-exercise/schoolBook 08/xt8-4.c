#include<stdio.h>
#include<stdlib.h>
//ɾ��������ĳ��Ԫ��  ������һλ�ŵ���һλ
void removea(int list[],int *n,int index){
    int *ptemp;
    if((ptemp=(int *)calloc(index,sizeof(int)))==NULL){
        printf("not able to allocate memory");
    }else{
        for(int i=0;i<index-1;i++){
            *(ptemp+i)=list[i];
        }
        for(int i=index;i<*n;i++){
            list[i-index]=list[i];
        }
        for(int i=0;i<index;i++){
            list[index+i]=*(ptemp+i);
        }
    }   
    free(ptemp); 
    *n=*n-1;
}
//����  ����   ѡ��λ��
//����������ĳ��λ�õ�ֵ
int leaveout(int list[],int *n,int m){
    int temp=m;
    if(temp>*n){
        temp=temp-*n;
    }
    int value=list[temp];
    removea(list,n, m);
    return value;
}

int main(void){
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
        //������ų�ȥ���˵ı��
        int *mptr,m,mynum;
        if((mptr=(int *)calloc(num,sizeof(int)))==NULL){
            printf("not able to allocate memory!");
        }else{    
            mynum=num;    
            printf("������һ������\n");
            scanf("%d",&m);
            for(int i=0;i<mynum;i++){
                *(mptr+i)=leaveout(ptr,&num,m);
                for(int i=0;i<mynum;i++){
                    printf("%d",*(ptr+i));
                } 
                printf("\n");
            } 
            for(int i=0;i<mynum;i++){
                printf("%d",*(mptr+i));
            }           
        }
        free(mptr); 
    }
    free(ptr); 
    getchar();
    getchar();
    return 0;
}
