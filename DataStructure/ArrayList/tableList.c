/**
 * �ڶ��£�˳���Ļ�������ʵ��
 * ������initList
 * ���룺insert
 * ɾ����del
 * ������select
 * ��ת��reserve
*/
#include<stdio.h>
#include<stdlib.h>
#define Max 100
//����˳���
typedef struct {
    int data[Max];
    int length;
} SeqList;
//��ʼ��Ԫ��
void initList(SeqList *s){
    s->length=0;
    for (int i = 0; i < Max; i++)
    {
        s->data[i]=i+1;
        s->length=(s->length)+1;
    }    
}
//����Ԫ��
/**
 * ������
 *      s����ָ��
 *      x��λ��
 *      v��ֵ
*/
void insert(SeqList *s,int x,int v){    
    if(100<x||x<1){
        exit(0);
    }
    //��x����������
    for (int i = s->length-1; i >x-1 ; i--)
    {
        s->data[i]=s->data[i-1];
    }
    //��v����x
    s->data[x-1]=v;
}
//ɾ��Ԫ��
/**
 * ������
 *      s����ָ��
 *      x��λ��
*/
void del(SeqList *s,int x){
    if(100<x||x<1){
        exit(0);
    }
    //��x����������
    for (int i =x-1; i < s->length-1 ; i++)
    {
        s->data[i]=s->data[i+1];
    }
}
//����Ԫ��
void select(SeqList s){
    for (int i = 0; i < s.length; i++)
    {
        printf("%d\n",s.data[i]);
    }
    
}
//��ת
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
    // printf("����********************************************\n");
    // insert(&s,20,521);    
    // select(s);
    printf("ɾ��********************************************\n");
    del(&s,20);    
    select(s);
    printf("��ת********************************************\n");
    reserve(&s);   
    select(s);
    getchar();
}