/**
 * ����
 * ��������
 * ɾ���ڵ�
 * ����ڵ�
 * ��������
 * malloc����ռ� 
 * free�ͷſռ�
 * sizeOf
*/
#include<stdio.h>
void main(){
    /**
     * ����һ���ṹ��student
     * num:ѧ��
     * name:����
     * score:�����ܷ���
     * stu:Ƕ�׽ṹָ��
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
    //��������
    int size=sizeof(struct student);    
    head=tail=NULL;
    printf("������ѧ�š��������ɼ����Կո������enter������һ����\n");
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
    printf("���ÿһ��ѧ��\n");
    printf("ѧ��\t����\t�����ܷ�\n");
    struct student * ptr;    
    for(ptr=head;ptr!=NULL;ptr=ptr->next){
        printf("%d\t%s\t%5.1f\n",ptr->num,ptr->name,ptr->score);
    }    
    getchar();
    getchar();
}
/**
 * ɾ��ĳһ���ڵ�
 * ����һ���ڵ��ָ�루p����ֻ��ɾ����ָ��ڵ����Ľڵ�
 * ������p->next=p->next->next
 * ���p->next   free
 * free(p->next);
*/

/**
 * ����һ�����
 * ����һ������ڵ��ָ�루p��һ��δ֪�ڵ㣨pL����
 * ֻ�ܲ��뵽pL�ĺ���Ľڵ���
 * ������p->next=pL->next;
 *       pL->next=s;
*/

