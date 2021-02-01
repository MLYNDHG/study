/**
 * 循环单链表
 * 
 * 
 * 尾指针表示的链表：
 * 和头指针表示法基本相同   仅仅是在创建的时候保存好尾结点
 * 相比头指针的优点   找首 尾 结点会快 
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node
{
    int num;
    struct Node *pNext;
} Node;

Node * create_List(Node **);
void show_List(Node *);
bool isEmpty_List(Node *);
int length_List(Node *);
void insert_List(Node *,int,int);
bool delete_List(Node *,int);

int main(){
    Node *Head=NULL,*Tail=NULL;//保存尾指针即可

    Head=create_List(&Tail);
    show_List(Head);    
    if(isEmpty_List(Head)){
        printf("当前循环链表为空\n");    
    }else{
        printf("当前循环链表不为空\n");    
    }
    printf("长度为:%d\n", length_List(Head));
    insert_List(Head,1,100);
    show_List(Head); 
    delete_List(Head,1);
    show_List(Head); 
    getchar();
    getchar();
    return 0;
}
Node * create_List(Node ** Tail){
    Node *Head=(Node *)malloc(sizeof(Node));
    int num;
    printf("请输入要创建的链表长度\n");
    scanf("%d",&num);
    Node *tail,*node;
    tail=Head;
    for(int i=0;i<num;i++){
        node=(Node *)malloc(sizeof(Node));        
        if(node==NULL){
            exit(-1);
        }
        printf("请输入第%d个元素的值：\n",i+1);
        scanf("%d",&(node->num));
        tail->pNext=node;
        tail=node;
        tail->pNext=Head;
    };
    Tail=tail;
    return Head;
}
void show_List(Node *Head){
    printf("您的链表：\n");
    Node * tail=Head;
    while(tail->pNext!=Head){    
        tail=tail->pNext;
        printf("%d ",tail->num);
    }
    printf("\n");
}
bool isEmpty_List(Node *Head){
    if(Head->pNext==Head){
        return 1;
    }
    else
    {
        return 0;
    }    
}
int length_List(Node *Head){
    Node * tail=Head;
    int length=0;
    while(tail->pNext!=Head){   
        length++;         
        tail=tail->pNext;
    }
    return length;
}
void insert_List(Node *Head,int index,int num){
    if(index>length_List(Head)||index<0){
        printf("超出索引！\n");
    }else{
        Node * tail=Head,*temp,*node;
        int length=0;
        while(tail->pNext!=Head){
            tail=tail->pNext;
            length++; 
            if(index==length){
                node=(Node *)malloc(sizeof(Node));        
                if(node==NULL){
                    exit(-1);
                }
                node->num=num;

                node->pNext=tail->pNext;
                tail->pNext=node;
                break;
            }        
        }
    }
}
bool delete_List(Node *Head,int index){
    Node * tail=Head,*node;
    int length=0;
    while(tail->pNext!=Head){
        tail=tail->pNext;
        length++; 
        if(index==length){
            node=tail->pNext;
            tail->pNext=tail->pNext->pNext;
            free(node);
            break;
        }        
    }
}

