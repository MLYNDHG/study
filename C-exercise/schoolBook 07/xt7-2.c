#include<stdio.h>
int main(void){
    printf("����һ��������(1~1000)\n");
    int n,a[1000],max=0;
    static int num[10];
    scanf("%d",&n);
    printf("��¼��%d��������\n",n);
    for(int i=0;i<n;i++){
        printf("�������%d������",i+1);
        scanf("%d",&a[i]);
    }        
    for(int i=0;i<n;i++){    
        int temp,pass=a[i];            
        while(pass>0){
            temp=pass%10;
            pass=pass/10;
            num[temp]++;
        }
    }
    //����������
    for(int i=0;i<10;i++){
        if(num[i]>max){
            max=num[i];
        }   
    }
    printf("������������");
     //�������л���û������ �����±걣������
    for(int i=0;i<10;i++){
        if(num[i]==max){
            printf("%d  ",i);
        }   
    } 
    printf("��������%d��",max);
    getchar();
    getchar();
    return 0;
}