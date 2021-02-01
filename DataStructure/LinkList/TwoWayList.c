/**
 *˫������
 *�������Ƶ�.....
 * ����һ��ǰ��ָ�뼴��
 * 
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int num;
    struct node *piror;
    struct node *pNext;
} Node,*pNode;

pNode create_List();
void show_List(pNode);
bool isEmpty_List(pNode);
int length_List(pNode);
void insert_List(pNode,int,int);
void delete_List(pNode,int);
void sort_List(pNode);

int main(){
    pNode phead=NULL;
    phead=create_List();
    show_List(phead);
    if(isEmpty_List(phead)){
        printf("��ǰ����Ϊ��\n");
    }else{
        printf("��ǰ����ǿ�\n");
    }
    printf("��ǰ����ĳ���Ϊ��%d\n",length_List(phead));

    insert_List(phead,1,100);
    show_List(phead);
    
    delete_List(phead,1);
    show_List(phead);

    sort_List(phead);
    show_List(phead);

    system("pause");
    return 0;
}
pNode create_List(){
    pNode ptail,Head=(pNode)malloc(sizeof(pNode));
    int num;
    printf("�������ʼ�����������");
    scanf("%d",&num);
    ptail=Head;
    Head->piror=NULL;
    if(NULL==Head){
        printf("�����ڴ����\n");
        exit(-1);
    }
    pNode node;
    for(int i=0;i<num;i++){
        node=(pNode)malloc(sizeof(Node));
        if(NULL==node){
            printf("�����ڴ����\n");            
            exit(-1);
        }
        printf("�������%d������ֵ��",i+1);
        scanf("%d",&(node->num));


        ptail->pNext=node;
        node->piror=ptail;


        ptail=ptail->pNext;
    }
    ptail->pNext=NULL;
    printf("�����ɹ���\n");
    return Head;
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
    //Ѱ��index������Ǹ���㣬�������� 1.��NULL!=p��&&i<index-1ȷ��index����������
    while(NULL!=p&&i<index-1){
        p=p->pNext;
        ++i;
    }
    if(i>index-1||NULL==p){        
        printf("����ʧ�ܣ�Խ�磡\n");
        return ;
    }
    
    node=(pNode)malloc(sizeof(Node));
    node->num=num;
    node->pNext=p->pNext;
    p->pNext=node;
    printf("����ɹ���\n");
    return ;
}

void delete_List(pNode Head,int index){
    pNode node,p=Head;
    int i=0;
    //Ѱ��index������Ǹ���㣬�������� 1.��NULL!=p��&&i<index-1ȷ��index����������
    while(NULL!=p&&i<index-1){
        p=p->pNext;
        ++i;
    }
    if(i>index-1||NULL==p){        
        printf("����ʧ�ܣ�Խ�磡\n");
        return ;
    }    
    node=p->pNext;
    p->pNext=p->pNext->pNext;
    free(node);
    printf("ɾ���ɹ���\n");
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
