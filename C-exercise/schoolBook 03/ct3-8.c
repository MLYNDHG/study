#include<stdio.h>
int main(){
    printf("������β�ѯ�Ļ���\n");
    int n;
    for(int i=0;i<5;i++){
        printf("[1]apples\n[2]pears\n[3]oranges\n[4]grapes\n[0]Exits\n");
        printf("�����ѯ���");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        switch(n){
            case 1: printf("3.00Ԫ/ǧ��\n"); break;
            case 2: printf("2.50Ԫ/ǧ��\n"); break;
            case 3: printf("4.10Ԫ/ǧ��\n"); break;
            case 4: printf("10.2Ԫ/ǧ��\n"); break;
            default:printf("unknown\n");break;
        }
    }
    printf("thanks!");
    getchar();
    getchar();
}