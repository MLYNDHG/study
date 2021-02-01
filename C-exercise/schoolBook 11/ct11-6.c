#include<stdio.h>
#include<stdlib.h>
struct student{
    int num;
    char name[20];
    float score;
    struct student *next;
};
/**
 * ���У�
 *     ȱ��:����ʱ������ͬ���ݵ����
 *          ����ʱ�����Ѵ������ݵ����
 *          ����ʱ���벻���ڵ����
 *          ɾ��ʱ���벻���ڵ����
 * 
 *     ���:�Ե�������в���ʱע����������
 *          1.ͷָ�����Ĳ���
 *          2.��ͷָ�����Ĳ���
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
        printf("������Ҫִ�еĲ������(0���˳�����)\n");
        printf("1.��������\n");
        printf("2.����������\n");
        printf("3.��������\n");
        printf("4.ɾ������\n");       
        printf("5.չʾ����\n"); 
        printf("6.ɾ��С��60�ֵ�ѧ��\n");       
        scanf("%d",&n);        
        switch(n){
            case 1:
                head=create();
                break;
            case 2:
                ptr=(struct student *)malloc(size);
                printf("������ѧ�š��������ɼ�\n");
                scanf("%d%s%f",&ptr->num,ptr->name,&ptr->score);
                head=insert(head,ptr);
                break;
            case 3:
                ptr=(struct student *)malloc(size);
                printf("������ѧ�����޸ĺ��������ɼ�\n");
                scanf("%d%s%f",&ptr->num,ptr->name,&ptr->score);
                head=modify(head,ptr);
                break;
            case 4:
                printf("������Ҫɾ����ѧ��\n");
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
    printf("������ѧ�š��������ɼ� (0:�˳�¼��)\n");
    scanf("%d%s%f",&ptr->num,ptr->name,&ptr->score);
    while(ptr->num){
        head=insert(head,ptr);
        ptr=(struct student *)malloc(size);
        printf("������ѧ�š��������ɼ� (0:�˳�¼��)\n");
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
        //�����д�С��������ʱ
        //ֻ��Ҫ��head�ĸ�����ע��head�ǲ����ƶ��ģ�ѭ��������  
        //�ҵ���ǰ�ڵ��next��ָ��ʱ  ��ǰ�ڵ㼴Ϊ���һ���ڵ�
        //���½ڵ����ӵ���ǰ�ڵ㼴��
        // while(ptr2->next!=NULL){
        //     ptr2=ptr2->next;
        // }
        // ptr2->next=ptr;
        // ptr->next=NULL;

        //2.
        //����ʱ
        //��head�ĸ�������ƶ� �������е�ֵ���½ڵ�Ƚ� ͬʱ����Ҫ��head��ǰ������ǰһ����㱣��
        //���������½ڵ�
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
            printf("δ�ҵ���ѧ����Ϣ\n");
        }else{
            student->next=ptr->next;
            ptr1->next=student;
            printf("���޸�ѧ����Ϣ\n");
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
    printf("ɾ���ɹ�\n");
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
    printf("ɾ���ɹ�\n");
    return head;
}
void myprintf(struct student * head){
    struct student *ptr;
    if(head==NULL){
        printf("NO List!\n");
    }else{
        printf("student records��\n");
        printf("num\tname\tscore\n");
        for(ptr=head;ptr!=NULL;ptr=ptr->next){
            printf("%d\t%s\t%f\n",ptr->num,ptr->name,ptr->score);
        }
    }
}