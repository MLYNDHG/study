//动态栈--> 就是链栈的头插法，先进后出
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
        printf("分配内存失败！\n");
        return ;
    }
    Pz->pNext=NULL;
    pS->pTop=Pz;
    pS->pTop=pS->pBottom;
    printf("初始化成功！\n");
    return ;
}

void push(pStack pS,int val){
    pNode Pnode=(pNode)malloc(sizeof(node));
    if(Pnode==NULL){
        printf("分配内存失败！\n");
        return ;
    }
    Pnode->data=val;
    Pnode->pNext= pS->pTop;
    pS->pTop=Pnode;
    printf("压栈成功！\n");
    return ;
}

void pop(pStack pS){
    pNode pz=(pNode)malloc(sizeof(node));
    if(pz==NULL){
        printf("分配内存失败！\n");
        return ;
    }
    pz=pS->pTop;    

    pS->pTop=pS->pTop->pNext;
    free(pz);
    printf("出栈成功！\n");
    return ;
}

void show(pStack pS){
    pNode p=(pNode)malloc(sizeof(node));
    if(p==NULL){
        printf("分配内存失败！\n");
        return ;
    }
    printf("当前栈内元素：");
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
        printf("分配内存失败！\n");
        return ;
    }
    p=pS->pTop;
    while(p!=pS->pBottom){
        pS->pTop=pS->pTop->pNext;
        free(p);

        p=pS->pTop;
    }
    printf("清空完成！\n");
    return;
}