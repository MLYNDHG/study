/**
 * 第二章：顺序表的基本操作实现
 * 创建：initList
 * 插入：insert
 * 删除：del
 * 遍历：select
 * 逆转：reserve
*/
#include<stdio.h>
#include<stdlib.h>
#define Max 100
//创建顺序表
typedef struct {
    int data[Max];
    int length;
} SeqList;
//初始化元素
void initList(SeqList *s){
    s->length=0;
    for (int i = 0; i < Max; i++)
    {
        s->data[i]=i+1;
        s->length=(s->length)+1;
    }    
}
//插入元素
/**
 * 参数：
 *      s：表指针
 *      x：位置
 *      v：值
*/
void insert(SeqList *s,int x,int v){    
    if(100<x||x<1){
        exit(0);
    }
    //把x后面的向后移
    for (int i = s->length-1; i >x-1 ; i--)
    {
        s->data[i]=s->data[i-1];
    }
    //将v放入x
    s->data[x-1]=v;
}
//删除元素
/**
 * 参数：
 *      s：表指针
 *      x：位置
*/
void del(SeqList *s,int x){
    if(100<x||x<1){
        exit(0);
    }
    //把x后面的向后移
    for (int i =x-1; i < s->length-1 ; i++)
    {
        s->data[i]=s->data[i+1];
    }
}
//遍历元素
void select(SeqList s){
    for (int i = 0; i < s.length; i++)
    {
        printf("%d\n",s.data[i]);
    }
    
}
//逆转
void reserve(SeqList *s){
    int x;
    for (int i =  0 ; i <(s->length)/2; i++)
    {
        x=s->data[i];
        s->data[i]=s->data[s->length-i-1];
        s->data[s->length-i-1]=x;
    }
    
}

int main(void){
    SeqList s;
    initList(&s);
    select(s);
    // printf("插入********************************************\n");
    // insert(&s,20,521);    
    // select(s);
    printf("删除********************************************\n");
    del(&s,20);    
    select(s);
    printf("反转********************************************\n");
    reserve(&s);   
    select(s);
    getchar();
}