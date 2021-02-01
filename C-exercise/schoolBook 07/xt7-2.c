#include<stdio.h>
int main(void){
    printf("输入一个正整数(1~1000)\n");
    int n,a[1000],max=0;
    static int num[10];
    scanf("%d",&n);
    printf("请录入%d个正整数\n",n);
    for(int i=0;i<n;i++){
        printf("请输入第%d个整数",i+1);
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
    //求得其中最大
    for(int i=0;i<10;i++){
        if(num[i]>max){
            max=num[i];
        }   
    }
    printf("出现最多的数字");
     //检索其中还有没有最大的 将其下标保存下来
    for(int i=0;i<10;i++){
        if(num[i]==max){
            printf("%d  ",i);
        }   
    } 
    printf("都出现了%d次",max);
    getchar();
    getchar();
    return 0;
}