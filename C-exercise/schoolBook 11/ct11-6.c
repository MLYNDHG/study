#include<stdio.h>
#include<stdlib.h>
struct student{
    int num;
    char name[20];
    float score;
    struct student *next;
};
/**
 * 码后感：
 *     缺陷:创建时输入相同数据的情况
 *          插入时输入已存在数据的情况
 *          更新时输入不存在的情况
 *          删除时输入不存在的情况
 * 
 *     理解:对单链表进行操作时注意两个部分
 *          1.头指针做的操作
 *          2.非头指针做的操作
*/
struct student * modify(struct student * head, struct student * student);
struct student * delete(struct student * head, int num);
struct student * deletePass(struct student * head, float score);
struct student * insert(struct student * head, struct student * student);
struct student * create();
void myprintf();

int main(void){
    struct student *head,*ptr;
    int n,num;
    int size=sizeof(struct student);   
    do{
        printf("请输入要执行的操作序号(0：退出程序)\n");
        printf("1.创建链表\n");
        printf("2.插入新数据\n");
        printf("3.更新数据\n");
        printf("4.删除数据\n");       
        printf("5.展示数据\n"); 
        printf("6.删除小于60分的学生\n");       
        scanf("%d",&n);        
        switch(n){
            case 1:
                head=create();
                break;
            case 2:
                ptr=(struct student *)malloc(size);
                printf("请输入学号、姓名、成绩\n");
                scanf("%d%s%f",&ptr->num,ptr->name,&ptr->score);
                head=insert(head,ptr);
                break;
            case 3:
                ptr=(struct student *)malloc(size);
                printf("请输入学号与修改后姓名、成绩\n");
                scanf("%d%s%f",&ptr->num,ptr->name,&ptr->score);
                head=modify(head,ptr);
                break;
            case 4:
                printf("请输入要删除的学号\n");
                scanf("%d",&num);
                head=delete(head,num);
                break;
            case 5:
                myprintf(head);
                break;
            case 6:
                head=deletePass(head,60);
                break;
        }
    }while(n);
    return 0;
}
struct student * create(){
    struct student * head,* ptr;
    head=NULL;
    int size=sizeof(struct student);    
    ptr=(struct student *)malloc(size);
    printf("请输入学号、姓名、成绩 (0:退出录入)\n");
    scanf("%d%s%f",&ptr->num,ptr->name,&ptr->score);
    while(ptr->num){
        head=insert(head,ptr);
        ptr=(struct student *)malloc(size);
        printf("请输入学号、姓名、成绩 (0:退出录入)\n");
        scanf("%d%s%f",&ptr->num,ptr->name,&ptr->score);
    }
    return head;
}
struct student * insert(struct student * head,struct student * student){
    struct student * ptr,* ptr1,* ptr2;
    ptr=student;
    ptr2=head;
    if(head==NULL){
        head=ptr;
        head->next=NULL;
    }else{
        //1.
        //不进行从小到大排序时
        //只需要将head的副本（注：head是不可移动的）循环向后查找  
        //找到当前节点的next无指向时  当前节点即为最后一个节点
        //将新节点连接到当前节点即可
        // while(ptr2->next!=NULL){
        //     ptr2=ptr2->next;
        // }
        // ptr2->next=ptr;
        // ptr->next=NULL;

        //2.
        //排序时
        //将head的副本向后移动 将副本中的值与新节点比较 同时还需要将head当前副本的前一个结点保存
        //用来连接新节点
        while((ptr->num>ptr2->num)&&(ptr2->next!=NULL)){
            ptr1=ptr2;
            ptr2=ptr2->next;
        }
        if(ptr->num<=ptr2->num){
            if(head==ptr2){
                head=ptr;
            }else{
                ptr1->next=ptr;                
            }
            ptr->next=ptr2;
        }else{
            ptr2->next=ptr;
            ptr->next=NULL;
        }
    }
    return head;
}
struct student * modify(struct student * head, struct student * student){
    struct student * ptr,*ptr1;
    ptr=head;
    if(head->num==student->num){
        student->next=head->next;  
        head=student;     
    }else{
        while(ptr->num!=student->num){
            ptr1=ptr;
            ptr=ptr->next;
            if(ptr==NULL){
                break;
            }
        }
        if(ptr==NULL){
            printf("未找到该学生信息\n");
        }else{
            student->next=ptr->next;
            ptr1->next=student;
            printf("已修改学生信息\n");
        }        
    }
    return head;
}
struct student * delete(struct student * head, int num){
    int result;
    struct student * ptr,*ptr1;
    ptr=head;
    if(head->num==num){
        head=head->next;
    }else{
        while((ptr->num!=num)){
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next=ptr->next;
    }
    free(ptr);
    printf("删除成功\n");
    return head;
}
struct student * deletePass(struct student * head, float score){
    int result;
    struct student * ptr,*ptr1;
    ptr=head;
    while(ptr!=NULL){
        if(head->score<score){
            head=head->next;
            ptr=head;
        }else{
            if(ptr->score<score){
                ptr1->next=ptr->next;
                ptr=ptr->next;
            }else{            
                ptr1=ptr;
                ptr=ptr->next;
            }
        }        
    }
    printf("删除成功\n");
    return head;
}
void myprintf(struct student * head){
    struct student *ptr;
    if(head==NULL){
        printf("NO List!\n");
    }else{
        printf("student records：\n");
        printf("num\tname\tscore\n");
        for(ptr=head;ptr!=NULL;ptr=ptr->next){
            printf("%d\t%s\t%f\n",ptr->num,ptr->name,ptr->score);
        }
    }
}