#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int score;
    struct num *next; 
} num;
int main(void){
     num *head,*tail,*ptr,*ptr1;
    head=tail=NULL;
    //����¼������
    printf("��������(-1�˳�)\n");
    int n;
    scanf("%d",&n);
    while(n!=-1){
        ptr=( num*)malloc(sizeof( num*));
        ptr->score=n;
        ptr->next=NULL;
        if(head==NULL){
            head=ptr;
        }else{
            tail->next=ptr;
        }
        tail=ptr;
        printf("��������(-1�˳�)\n");
        scanf("%d",&n);
    }
    printf("��ǰ����\n");
    for(ptr=head;ptr!=NULL;ptr=ptr->next){
        printf("%d\n",ptr->score);       
    }
    //����ɾ������
    printf("��������\n");
    int m;
    scanf("%d",&m);
    for(ptr=head;ptr!=NULL;){       
        if(ptr->score==m){                
           if(ptr==head){
                head=head->next;
           }else{
                tail->next=ptr->next;
           }
        }else{
            //�н�����ƶ�
            tail=ptr;//������һ��λ��
        }
        ptr=ptr->next;
    }
    printf("ɸѡ����\n");
    for(ptr=head;ptr!=NULL;ptr=ptr->next){
        printf("%d\n",ptr->score);
    }
    getchar();
    getchar();
}