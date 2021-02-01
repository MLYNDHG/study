/**
 * 链表
 * 创建链表
 * 删除节点
 * 插入节点
 * 遍历链表
 * malloc分配空间 
 * free释放空间
 * sizeOf
*/
#include<stdio.h>
void main(){
    /**
     * 定义一个结构：student
     * num:学号
     * name:姓名
     * score:三科总分数
     * stu:嵌套结构指针
    */
    struct student{
        int num;
        char name[10];
        float score;
        struct student * next;
    };
    struct student * head,*tail,*p;    
    int num;
    char name[10];
    float score;
    //创建链表
    int size=sizeof(struct student);    
    head=tail=NULL;
    printf("请输入学号、姓名、成绩，以空格隔开，enter输入下一个人\n");
    scanf("%d%s%f",&num,name,&score);
    while(num){        
        p=(struct student *)malloc(size);
        p->num=num;
	    strcpy(p->name,name);
        p->score=score;
        p->next=NULL;
        if(head==NULL)head=p;           
        else tail->next=p;
        tail=p;
        scanf("%d%s%f",&num,name,&score);
    }
    printf("输出每一个学生\n");
    printf("学号\t姓名\t三科总分\n");
    struct student * ptr;    
    for(ptr=head;ptr!=NULL;ptr=ptr->next){
        printf("%d\t%s\t%5.1f\n",ptr->num,ptr->name,ptr->score);
    }    
    getchar();
    getchar();
}
/**
 * 删除某一个节点
 * 给定一个节点的指针（p），只能删除该指针节点后面的节点
 * 即：将p->next=p->next->next
 * 最后将p->next   free
 * free(p->next);
*/

/**
 * 插入一个检点
 * 给定一个插入节点的指针（p）一个未知节点（pL），
 * 只能插入到pL的后面的节点中
 * 即：将p->next=pL->next;
 *       pL->next=s;
*/

