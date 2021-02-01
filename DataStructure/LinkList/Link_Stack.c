//��̬ջ--> ������ջ��ͷ�巨���Ƚ����
#include<stdio.h> 
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* pNext; 
}node,* pNode;

typedef struct Stack {
    pNode pTop;
    pNode pBottom;
} stack,* pStack;

void init(pStack);
void push(pStack,int);
void pop(pStack);
void show(pStack);
void clear(pStack);

int main(){
    stack pS;
    init(&pS);
    push(&pS,1);
    push(&pS,2);
    push(&pS,3);
    push(&pS,4);
    push(&pS,5);
    push(&pS,6);
    push(&pS,7);
    show(&pS);

    pop(&pS);
    pop(&pS);
    pop(&pS);
    show(&pS);

    clear(&pS);
    show(&pS);

    system("pause");
}
void init(pStack pS){
    pNode Pz;
    Pz=(pNode)malloc(sizeof(node));
    
    if(Pz==NULL){
        printf("�����ڴ�ʧ�ܣ�\n");
        return ;
    }
    Pz->pNext=NULL;
    pS->pTop=Pz;
    pS->pTop=pS->pBottom;
    printf("��ʼ���ɹ���\n");
    return ;
}

void push(pStack pS,int val){
    pNode Pnode=(pNode)malloc(sizeof(node));
    if(Pnode==NULL){
        printf("�����ڴ�ʧ�ܣ�\n");
        return ;
    }
    Pnode->data=val;
    Pnode->pNext= pS->pTop;
    pS->pTop=Pnode;
    printf("ѹջ�ɹ���\n");
    return ;
}

void pop(pStack pS){
    pNode pz=(pNode)malloc(sizeof(node));
    if(pz==NULL){
        printf("�����ڴ�ʧ�ܣ�\n");
        return ;
    }
    pz=pS->pTop;    

    pS->pTop=pS->pTop->pNext;
    free(pz);
    printf("��ջ�ɹ���\n");
    return ;
}

void show(pStack pS){
    pNode p=(pNode)malloc(sizeof(node));
    if(p==NULL){
        printf("�����ڴ�ʧ�ܣ�\n");
        return ;
    }
    printf("��ǰջ��Ԫ�أ�");
    p=pS->pTop;
    while(p!=pS->pBottom){
        printf("%d ",p->data);
        p=p->pNext;
    }
    printf("\n");
    return;
}

void clear(pStack pS){
    pNode p=(pNode)malloc(sizeof(node));
    if(p==NULL){
        printf("�����ڴ�ʧ�ܣ�\n");
        return ;
    }
    p=pS->pTop;
    while(p!=pS->pBottom){
        pS->pTop=pS->pTop->pNext;
        free(p);

        p=pS->pTop;
    }
    printf("�����ɣ�\n");
    return;
}