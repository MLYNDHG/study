/**
 * 一个顺序表的练习
*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct arr{
    int len;//数组长度
    int cnt;//当前实际存放个数
    int *pbase;//开辟内存空间首地址（首元素）
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
 * 功能： 判断是否存放元素为空
 * 参数： myArr->struct arr * 类型
 * 返回值：空 1  ，非空  0
*/
bool isempyty_arr(struct arr* myArr){
    if(0==myArr->cnt)
        return 1;
    else
        return 0;
}

/**
 * 功能： 判断是否存放元素为空
 * 参数： myArr->struct arr * 类型
 * 返回值：满 1  ，非满  0
*/
bool isfull_arr(struct arr* myArr){
    if(myArr->len==myArr->cnt)
        return 1;
    else
        return 0;
}

/**
 * 功能： 初始化顺序表
 * 参数： myArr->struct arr * 类型 
*/
void init_arr(struct arr* myArr){
    if(!isempyty_arr(myArr)){  
        printf("当前数组不为空，是否继续初始化\n");
        char ch;
        scanf("请输入(Y/N):",&ch);
        if(ch!='Y')
            return;
    }
    printf("请输入初始个数:\n");
    int num;
    scanf("%d",&num);
    myArr->pbase= (int* )malloc(sizeof(int)*num);
    myArr->len=num;
    myArr->cnt=0;
    printf("初始化完成！\n");
    return ;
}

/**
 * 功能： 追加元素
 * 参数： myArr->struct arr * 类型 
*/
void append_arr(struct arr* myArr,int num){
    if(isfull_arr(myArr)){  
        printf("当前顺序表已满，不能追加\n");
        return;
    }
    (myArr->pbase)[myArr->cnt]=num;
    (myArr->cnt)++;
    printf("追加成功\n");
    return;
}

/**
 * 功能： 展示顺序列表
 * 参数： myArr->struct arr * 类型 
*/
void showList_arr(struct arr* myArr){
    for(int i=0;i<myArr->cnt;++i){
        printf("%d \n",(myArr->pbase)[i]);
    }
    return ;
}

/**
 * 功能： 插入元素到顺序列表
 * 参数： myArr->struct arr * 类型 
 *       num->int类型  要插入的元素
 *       index->int类型  要插入的位置
*/
void insert_arr(struct arr* myArr,int num,int index){
    if(isfull_arr(myArr)){  
        printf("当前顺序表已满，不能插入\n");
        return;
    }
    if(index<1||index>(myArr->len)){
        printf("越界！");
        return ;
    }
    for(int i=0;i<=(myArr->cnt-index);++i){
        myArr->pbase[myArr->cnt-i]=myArr->pbase[myArr->cnt-i-1];
    }
    myArr->pbase[index-1]=num;
    (myArr->cnt)++;
    printf("插入成功!\n");
    return ;
}

/**
 * 功能： 删除顺序列表中的元素
 * 参数： myArr->struct arr * 类型 
 *       index->int类型  要插入的位置
*/
void delete_arr(struct arr* myArr,int index){
    if(isempyty_arr(myArr)){  
        printf("当前数组为空，不可删除元素!\n");
        return;
    }
    if(index<1||index>(myArr->len)){
        printf("越界！");
        return ;
    }
    for(int i=0;i<=(myArr->cnt-index-1);++i){
        myArr->pbase[index-1+i]=myArr->pbase[index+i];
    }    
    (myArr->cnt)--;
    printf("删除成功!\n");
    return ;
}

/**
 * 功能： 反转顺序列表中的元素
 * 参数： myArr->struct arr * 类型
*/
void inverse_arr(struct arr* myArr){
    int temp;
    for(int i=0;i<(myArr->cnt)/2;i++){
        temp=myArr->pbase[i];
        myArr->pbase[i]=myArr->pbase[myArr->cnt-i-1];
        myArr->pbase[myArr->cnt-i-1]=temp;
    }
    printf("逆序成功！\n");
}

/**
 * 功能： 从大到小顺序列表中的元素
 * 参数： myArr->struct arr * 类型
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
    printf("排序成功!\n");
}