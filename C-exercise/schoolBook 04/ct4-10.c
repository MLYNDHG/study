#include<stdio.h>
int main(void){
    printf("����ɼ�����");
    int n,min=0,grade;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("�����%d���ɼ�",i+1);
        scanf("%d",&grade);
        if(i==0){
            min=grade;
        };
        if(min>=grade){
            min=grade;
        }
    }
    printf("�ɼ�����СֵΪ��%d",min);
    getchar();
    getchar();
    return 0;
}