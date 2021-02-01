//静态队列-->就是循环数组，先进先出
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
    printf("请输入初始队列长度：");
    scanf("%d",&num);
    num++;//因为循环队列判断队满需要一个标志位，故留有一个空间
    pQueue->queueArr=(int*)malloc(sizeof(int)*num);
    pQueue->front=0;
    pQueue->rear=0;
    pQueue->len=num;
    printf("初始化成功!\n");
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
        printf("入队失败!\n");
        return ;
    }else{
        pQueue->queueArr[pQueue->rear]=val;
        pQueue->rear=(pQueue->rear+1)%pQueue->len;
        printf("入队成功!\n");
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
        printf("出队失败！\n");
        return ;
    }else{
        pQueue->front=(pQueue->front+1)%pQueue->len;
        printf("出队成功！\n");
        return ;
    }
}

