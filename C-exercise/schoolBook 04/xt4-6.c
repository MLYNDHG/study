#include<stdio.h>
#include<math.h>
int main(void){
    printf("输入一个数(3~7)之间");
    int n,max=0;
    scanf("%d",&n);
    if(n>=3&&n<=7){
        //得到按当前位数下最大数max
        for(int i=1;i<=n;i++){
            max=max*10+9;        
        }
        // printf("%d",max);
        for(int i=0;i<max;i++){            
            int wei=0,dam=i,temp=i;  
            double sum=0;          
            //得到当前判断的数是几位数
            for(int j=0;dam>=1;j++){                
                dam=dam/10;
                wei++;
            }
            for(int j=0;j<wei;j++){
                sum+= pow(temp%10,wei);
                temp=temp/10;                
            }
            if(sum==i){
                printf("%d位水仙花数%d\n",wei,i);    
            }        
        }
    }else{
        printf("error");
    }    
    printf("finish!");
    getchar();
    getchar();
    return 0;
}