#include<stdio.h>
int main(void){
    printf("����һ��������\n");
    int n,a[10],max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("�������%d������",i+1);
        scanf("%d",&a[i]);
    }    
    //ѭ��һ�ν����ֵ�ŵ�����һ������һ��ѭ����һ�����μ�
    for(int i=0;i<n;i++){
        max=0;        
        for(int j=i;j<n;j++){
            if(max<a[j]){
                max=a[j];
                a[j]=a[i];
                a[i]=max;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);      
    } 
    getchar();
    getchar();
    return 0;
}