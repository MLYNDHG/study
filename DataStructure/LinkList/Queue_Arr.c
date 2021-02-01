//��̬����-->����ѭ�����飬�Ƚ��ȳ�
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Queue{
    int len;
    int front;
    int rear;
    int * queueArr;
}Queue;

void init(Queue*);
void in_Queue(Queue*,int);
void out_Queue(Queue*);
void show_Queue(Queue*);
bool isEmpty_Queue(Queue*);
bool isFull_Queue(Queue*);

int main(){
    Queue queue;
    init(&queue);
    in_Queue(&queue,1);
    in_Queue(&queue,2);
    in_Queue(&queue,3);
    in_Queue(&queue,4);
    in_Queue(&queue,5);
    in_Queue(&queue,6);
    show_Queue(&queue);

    out_Queue(&queue);
    show_Queue(&queue);

    system("pause");
    free(queue.queueArr);
    return 0;
}

void init(Queue* pQueue){
    int num;
    printf("�������ʼ���г��ȣ�");
    scanf("%d",&num);
    num++;//��Ϊѭ�������ж϶�����Ҫһ����־λ��������һ���ռ�
    pQueue->queueArr=(int*)malloc(sizeof(int)*num);
    pQueue->front=0;
    pQueue->rear=0;
    pQueue->len=num;
    printf("��ʼ���ɹ�!\n");
    return ;
}

bool isEmpty_Queue(Queue* pQueue){
    if(pQueue->front==pQueue->rear){
        return true;
    }else{
        return false;
    }
}

bool isFull_Queue(Queue* pQueue){
    if(pQueue->front==(pQueue->rear+1)%pQueue->len){
        return true;
    }else{
        return false;
    }
}

void in_Queue(Queue* pQueue,int val){
    if(isFull_Queue(pQueue)){
        printf("���ʧ��!\n");
        return ;
    }else{
        pQueue->queueArr[pQueue->rear]=val;
        pQueue->rear=(pQueue->rear+1)%pQueue->len;
        printf("��ӳɹ�!\n");
        return ;
    }
}

void show_Queue(Queue* pQueue){
    int i=pQueue->front;
    while(i!=pQueue->rear){
        printf("%d ",pQueue->queueArr[i]);
        i=(i+1)%pQueue->len;
    }
    printf("\n");
    return ;
}

void out_Queue(Queue* pQueue){
    if(isEmpty_Queue(pQueue)){
        printf("����ʧ�ܣ�\n");
        return ;
    }else{
        pQueue->front=(pQueue->front+1)%pQueue->len;
        printf("���ӳɹ���\n");
        return ;
    }
}

