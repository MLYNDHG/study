#include<stdio.h>
#include<stdlib.h>
struct num{
    int score;
    struct num *next; 
};
int main(void){
    struct num *head,*tail,*ptr,*NEW;
    head=tail=NULL;
    printf("��������(-1�˳�)\n");
    int n;
    scanf("%d",&n);
    while(n!=-1){
        ptr=(struct num*)malloc(sizeof(struct num*));
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
    NEW=tail=NULL;
    for(ptr=head;ptr!=NULL;ptr=ptr->next){       
        if(ptr->score%2!=0){                
            if(NEW==NULL){
                NEW=ptr;
            }else{
                tail->next=ptr; 
            }
            tail=ptr;
        }
    }
    printf("ɸѡ����\n");
    for(ptr=NEW;ptr!=NULL;ptr=ptr->next){
        printf("%d\n",ptr->score);
    }
    getchar();
    getchar();
}