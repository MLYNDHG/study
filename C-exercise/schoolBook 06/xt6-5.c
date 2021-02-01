#include<stdio.h>
#include<math.h>
int zhishu(n);
int main(void){
    int n=0;
    for(int i=6;i<=100;i=i+2){
        for(int j=2;j<i;j++){
            if(zhishu(j)){
                for(int k=2;k<i;k++){
                    if(zhishu(k)&&k+j==i){
                        printf("%d=%d+%d¡¢",i,j,k);  
                        n++;  
                        if(n%5==1){
                            printf("\n");          
                        }                              
                        break;                     
                    }
                }  
            }                            
        }                  
    }
    printf("finish!");
    getchar();
    getchar();
    getchar();
    getchar();
}
int zhishu(int n){
    if(n==1)return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}