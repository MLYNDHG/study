#include<stdio.h>
#include<stdlib.h>
//删除数组中某个元素  并将后一位放到第一位
void removea(int list[],int *n,int index){
    int *ptemp;
    if((ptemp=(int *)calloc(index,sizeof(int)))==NULL){
        printf("not able to allocate memory");
    }else{
        for(int i=0;i<index-1;i++){
            *(ptemp+i)=list[i];
        }
        for(int i=index;i<*n;i++){
            list[i-index]=list[i];
        }
        for(int i=0;i<index;i++){
            list[index+i]=*(ptemp+i);
        }
    }   
    free(ptemp); 
    *n=*n-1;
}
//数组  长度   选择位置
//返回数组中某个位置的值
int leaveout(int list[],int *n,int m){
    int temp=m;
    if(temp>*n){
        temp=temp-*n;
    }
    int value=list[temp];
    removea(list,n, m);
    return value;
}

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
        int *mptr,m,mynum;
        if((mptr=(int *)calloc(num,sizeof(int)))==NULL){
            printf("not able to allocate memory!");
        }else{    
            mynum=num;    
            printf("请输入一个数字\n");
            scanf("%d",&m);
            for(int i=0;i<mynum;i++){
                *(mptr+i)=leaveout(ptr,&num,m);
                for(int i=0;i<mynum;i++){
                    printf("%d",*(ptr+i));
                } 
                printf("\n");
            } 
            for(int i=0;i<mynum;i++){
                printf("%d",*(mptr+i));
            }           
        }
        free(mptr); 
    }
    free(ptr); 
    getchar();
    getchar();
    return 0;
}
