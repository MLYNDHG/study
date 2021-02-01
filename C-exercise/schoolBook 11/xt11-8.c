#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int score;
    struct num *next; 
} num;
int main(void){
     num *head,*tail,*ptr,*ptr1;
    head=tail=NULL;
    //进行录入数据
    printf("输入整数(-1退出)\n");
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
        printf("输入整数(-1退出)\n");
        scanf("%d",&n);
    }
    printf("当前数据\n");
    for(ptr=head;ptr!=NULL;ptr=ptr->next){
        printf("%d\n",ptr->score);       
    }
    //进行删除数据
    printf("输入整数\n");
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
            //中介向后移动
            tail=ptr;//保留上一个位置
        }
        ptr=ptr->next;
    }
    printf("筛选数据\n");
    for(ptr=head;ptr!=NULL;ptr=ptr->next){
        printf("%d\n",ptr->score);
    }
    getchar();
    getchar();
}