#include<stdio.h>
#include<stdlib.h>
//删除数组中某个元素
void removea(int list[],int *n,int index){
    for(int i=index;i<*n-1;i++){
        list[i]=list[i+1];
    }
    *n=*n-1;
};
//数组  长度   选择位置  开始位置
//返回数组中某个位置的值
int leaveout(int list[],int *n,int m,int *next){
    int i;
    for(i=0;i<*n;i++){
        if(list[i]==*next){
            break;
        }
    }
    int temp=i+m;
    if(temp>*n){
        temp=temp-*n;
    }
    *next=list[temp+1];
    int value=list[temp];
    removea(list,n, m);
    return value;
};

int main(void){
    printf("请输入一个数生成数组：\n");
    int num,*ptr;
    scanf("%d",&num);
    if((ptr=(int *)calloc(num,sizeof(int)))==NULL){
        printf("not able to allocate memory!");
    }else{
        for(int i=0;i<num;i++){
            printf("请输入第%d个数字\n",i+1);
            scanf("%d",ptr+i);
        }
        //用来存放出去的人的编号
        int *mptr,*next,m,mynum;
        if((mptr=(int *)calloc(num,sizeof(int)))==NULL){
            printf("not able to allocate memory!");
        }else{    
            next=ptr;  
            mynum=num;    
            printf("请输入一个数字\n");
            scanf("%d",&m);
            for(int i=0;i<mynum;i++){
                *(mptr+i)=leaveout(ptr,&num,m,next);
            } 
            for(int i=0;i<mynum;i++){
                printf("%d",*(mptr+i));
            }           
        }
    }
    getchar();
    getchar();
    return 0;
}
