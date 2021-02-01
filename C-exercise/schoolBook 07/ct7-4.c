#include<stdio.h>
int main(void){
    int a[10],b[10],n,m,count=0;
    static int c[20];
    //
    printf("输入1个数(1~10)\n");
    scanf("%d",&n);    
    printf("输入%d个数\n",n);
    for(int i=0;i<n;i++){
        printf("请输入第%d个数字：",i+1);
        scanf("%d",&a[i]);
    }    
    //
    printf("输入1个数(1~10)\n");
    scanf("%d",&m);    
    printf("输入%d个数\n",m);
    for(int i=0;i<m;i++){
        printf("请输入第%d个数字：",i+1);
        scanf("%d",&b[i]);
    }    
    //
    int flag1,flag2;  
    //判断a数组中的每一项在b数组中是否存在
    //不存在就添加到c数组中去（如果c中已经存在该数则不进行添加）  
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