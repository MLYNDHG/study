/**
 * ����5�������������Ǵ�������a�У�����
    ��1����x��Ȼ���������в���x�������
    ���������Ӧ���±꣬���������Not
    Found".
*/
#include<stdio.h>
void main(){
    int num[5];
    int x;
    printf("�������������");
    for(int i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    printf("��������һ��������");
    scanf("%d",&x);
    printf("��ǰ������ĳ�Ǯλ����");
    int sign=-1;
    for(int i=0;i<5;i++){
        if(num[i]==x){
            sign=i+1;
            printf("��ǰ�����������λ���������%d��λ��",i+1);
        }
    }
    if(sign==-1){
        printf("NOT FOUND");
    }
    getchar();     
    getchar();    
    getchar();   
}