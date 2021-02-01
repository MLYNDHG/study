/**
 * һ��˳������ϰ
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct arr{
    int len;//���鳤��
    int cnt;//��ǰʵ�ʴ�Ÿ���
    int *pbase;//�����ڴ�ռ��׵�ַ����Ԫ�أ�
};
void init_arr(struct arr*);
void append_arr(struct arr*,int);
void insert_arr(struct arr* myArr,int num,int index);
void delete_arr(struct arr* myArr,int index);
void showList_arr(struct arr* );
bool isempyty_arr(struct arr* );
bool isfull_arr(struct arr* );
void inverse_arr(struct arr* );
void resort_arr(struct arr* );

int main(){
    struct arr myArr;
    init_arr(&myArr);

    append_arr(&myArr,10);
    append_arr(&myArr,14);
    append_arr(&myArr,12);
    append_arr(&myArr,1);
    append_arr(&myArr,3);
    showList_arr(&myArr);

    insert_arr(&myArr,100,1);
    showList_arr(&myArr);

    delete_arr(&myArr,1);
    showList_arr(&myArr);

    inverse_arr(&myArr);
    showList_arr(&myArr);


    append_arr(&myArr,99);
    append_arr(&myArr,-1);
    append_arr(&myArr,30);
    resort_arr(&myArr);
    showList_arr(&myArr);

    system("pause");
}
/**
 * ���ܣ� �ж��Ƿ���Ԫ��Ϊ��
 * ������ myArr->struct arr * ����
 * ����ֵ���� 1  ���ǿ�  0
*/
bool isempyty_arr(struct arr* myArr){
    if(0==myArr->cnt)
        return 1;
    else
        return 0;
}

/**
 * ���ܣ� �ж��Ƿ���Ԫ��Ϊ��
 * ������ myArr->struct arr * ����
 * ����ֵ���� 1  ������  0
*/
bool isfull_arr(struct arr* myArr){
    if(myArr->len==myArr->cnt)
        return 1;
    else
        return 0;
}

/**
 * ���ܣ� ��ʼ��˳���
 * ������ myArr->struct arr * ���� 
*/
void init_arr(struct arr* myArr){
    if(!isempyty_arr(myArr)){  
        printf("��ǰ���鲻Ϊ�գ��Ƿ������ʼ��\n");
        char ch;
        scanf("������(Y/N):",&ch);
        if(ch!='Y')
            return;
    }
    printf("�������ʼ����:\n");
    int num;
    scanf("%d",&num);
    myArr->pbase= (int* )malloc(sizeof(int)*num);
    myArr->len=num;
    myArr->cnt=0;
    printf("��ʼ����ɣ�\n");
    return ;
}

/**
 * ���ܣ� ׷��Ԫ��
 * ������ myArr->struct arr * ���� 
*/
void append_arr(struct arr* myArr,int num){
    if(isfull_arr(myArr)){  
        printf("��ǰ˳�������������׷��\n");
        return;
    }
    (myArr->pbase)[myArr->cnt]=num;
    (myArr->cnt)++;
    printf("׷�ӳɹ�\n");
    return;
}

/**
 * ���ܣ� չʾ˳���б�
 * ������ myArr->struct arr * ���� 
*/
void showList_arr(struct arr* myArr){
    for(int i=0;i<myArr->cnt;++i){
        printf("%d \n",(myArr->pbase)[i]);
    }
    return ;
}

/**
 * ���ܣ� ����Ԫ�ص�˳���б�
 * ������ myArr->struct arr * ���� 
 *       num->int����  Ҫ�����Ԫ��
 *       index->int����  Ҫ�����λ��
*/
void insert_arr(struct arr* myArr,int num,int index){
    if(isfull_arr(myArr)){  
        printf("��ǰ˳������������ܲ���\n");
        return;
    }
    if(index<1||index>(myArr->len)){
        printf("Խ�磡");
        return ;
    }
    for(int i=0;i<=(myArr->cnt-index);++i){
        myArr->pbase[myArr->cnt-i]=myArr->pbase[myArr->cnt-i-1];
    }
    myArr->pbase[index-1]=num;
    (myArr->cnt)++;
    printf("����ɹ�!\n");
    return ;
}

/**
 * ���ܣ� ɾ��˳���б��е�Ԫ��
 * ������ myArr->struct arr * ���� 
 *       index->int����  Ҫ�����λ��
*/
void delete_arr(struct arr* myArr,int index){
    if(isempyty_arr(myArr)){  
        printf("��ǰ����Ϊ�գ�����ɾ��Ԫ��!\n");
        return;
    }
    if(index<1||index>(myArr->len)){
        printf("Խ�磡");
        return ;
    }
    for(int i=0;i<=(myArr->cnt-index-1);++i){
        myArr->pbase[index-1+i]=myArr->pbase[index+i];
    }    
    (myArr->cnt)--;
    printf("ɾ���ɹ�!\n");
    return ;
}

/**
 * ���ܣ� ��ת˳���б��е�Ԫ��
 * ������ myArr->struct arr * ����
*/
void inverse_arr(struct arr* myArr){
    int temp;
    for(int i=0;i<(myArr->cnt)/2;i++){
        temp=myArr->pbase[i];
        myArr->pbase[i]=myArr->pbase[myArr->cnt-i-1];
        myArr->pbase[myArr->cnt-i-1]=temp;
    }
    printf("����ɹ���\n");
}

/**
 * ���ܣ� �Ӵ�С˳���б��е�Ԫ��
 * ������ myArr->struct arr * ����
*/
void resort_arr(struct arr* myArr){
    int temp=0;
    for (int i = 0; i < myArr->cnt; i++)
    {
        for (int j = i; j < myArr->cnt; j++)
        {
            if(myArr->pbase[i]< myArr->pbase[j]){
                temp=myArr->pbase[j];
                myArr->pbase[j]=myArr->pbase[i];
                myArr->pbase[i]=temp;
            }
        }
    }
    printf("����ɹ�!\n");
}