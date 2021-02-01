#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/**
 * 单链表的操作
*/
typedef struct node{
    int num;
    struct node *pNext;
} Node,*pNode;

pNode create_List();
void show_List(pNode);
bool isEmpty_List(pNode);
int length_List(pNode);
void insert_List(pNode,int,int);
void delete_List(pNode,int);
void sort_List(pNode);

int main(void){
    pNode phead=NULL;
    phead=create_List();
    show_List(phead);
    if(isEmpty_List(phead)){
        printf("当前链表为空\n");
    }else{
        printf("当前链表非空\n");
    }
    printf("当前链表的长度为：%d\n",length_List(phead));

    insert_List(phead,1,100);
    show_List(phead);
    
    delete_List(phead,1);
    show_List(phead);

    sort_List(phead);
    show_List(phead);

    system("pause");
}

pNode create_List(){
    int num;
    printf("请输入初始链表结点个数：");
    scanf("%d",&num);
    pNode ptail, phead=NULL;
    phead =(pNode)malloc(sizeof(Node));
    ptail=phead;
    if(NULL==phead){
        printf("分配内存出错！\n");
        exit(-1);
    }
    pNode node;
    for(int i=0;i<num;i++){
        node=(pNode)malloc(sizeof(Node));
        if(NULL==node){
            printf("分配内存出错！\n");            
            exit(-1);
        }
        printf("请输入第%d个结点的值：",i+1);
        scanf("%d",&(node->num));
        ptail->pNext=node;
        ptail=ptail->pNext;
    }
    ptail->pNext=NULL;
    printf("创建成功！\n");
    return phead;
}

void show_List(pNode Node){
    pNode ptr;
    for(ptr=Node->pNext;ptr!=NULL;ptr=ptr->pNext){
        printf("%d  ",ptr->num);       
    }
    printf("\n");       
    return ;
}

bool isEmpty_List(pNode Node){
    if(Node->pNext==NULL){
        return 1;
    }else{
        return 0;
    }
}

int length_List(pNode Head){
    int i,num=0;
    pNode Node=Head;
    for(Node=Head;Node->pNext!=NULL;Node=Node->pNext){
        ++i;
    }
    return i;
}

void insert_List(pNode Head,int index,int num){
    pNode node,p=Head;
    int i=0;
    //寻找index代表的那个结点，两个条件 1.（NULL!=p）&&i<index-1确保index在整条链中
    while(NULL!=p&&i<index-1){
        p=p->pNext;
        ++i;
    }
    if(i>index-1||NULL==p){        
        printf("插入失败，越界！\n");
        return ;
    }
    
    node=(pNode)malloc(sizeof(Node));
    node->num=num;
    node->pNext=p->pNext;
    p->pNext=node;
    printf("插入成功！\n");
    return ;
}

void delete_List(pNode Head,int index){
    pNode node,p=Head;
    int i=0;
    //寻找index代表的那个结点，两个条件 1.（NULL!=p）&&i<index-1确保index在整条链中
    while(NULL!=p&&i<index-1){
        p=p->pNext;
        ++i;
    }
    if(i>index-1||NULL==p){        
        printf("插入失败，越界！\n");
        return ;
    }    
    node=p->pNext;
    p->pNext=p->pNext->pNext;
    free(node);
    printf("删除成功！\n");
    return ;
}

void sort_List(pNode Head){
    pNode p,q;
    int temp;
    for (p=Head->pNext;NULL!=p;p=p->pNext)
    {
        for (q=p->pNext; NULL!=q; q=q->pNext)
        {
            if(p->num<q->num){
                temp=q->num;
                q->num=p->num;
                p->num=temp;
            }
        }
    }  
    return ;  
}


