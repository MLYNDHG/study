#include<stdio.h>
int main(void){
    int a[10],b[10],n,m,count=0;
    static int c[20];
    //
    printf("����1����(1~10)\n");
    scanf("%d",&n);    
    printf("����%d����\n",n);
    for(int i=0;i<n;i++){
        printf("�������%d�����֣�",i+1);
        scanf("%d",&a[i]);
    }    
    //
    printf("����1����(1~10)\n");
    scanf("%d",&m);    
    printf("����%d����\n",m);
    for(int i=0;i<m;i++){
        printf("�������%d�����֣�",i+1);
        scanf("%d",&b[i]);
    }    
    //
    int flag1,flag2;  
    //�ж�a�����е�ÿһ����b�������Ƿ����
    //�����ھ���ӵ�c������ȥ�����c���Ѿ����ڸ����򲻽�����ӣ�  
    for(int i=0;i<n;i++){
        flag1=0;
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                flag1=1;  
                break;          
            }            
        }   
        if(!flag1){
            flag2=0;
            for(int k=0;k<20;k++){
                if(a[i]==c[k]){
                    flag2=1;
                }              
            }
            if(!flag2){
                c[count++]=a[i]; 
                printf("%d  ",a[i]);
            }
        }
    }   
    //
    for(int i=0;i<m;i++){
        flag1=0;
        for(int j=0;j<n;j++){
            if(b[i]==a[j]){
                flag1=1;  
                break;          
            }            
        }   
        if(!flag1){
            flag2=0;
            for(int k=0;k<20;k++){
                if(b[i]==c[k]){
                    flag2=1;
                }              
            }
            if(!flag2){
                c[count++]=b[i];                 
                printf("%d  ",b[i]);
            }
        }
    }
    getchar();
    getchar();
    return 0;
}