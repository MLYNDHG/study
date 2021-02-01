#include<stdio.h>
#include<math.h>
int judgement(int n);
int main(){
    int n,total=0;
    printf("请输入一个数(n>101)\n");
    scanf("%d",&n);
    for(int i=101;i<n;i++){
        if(judgement(i)){
            printf("%d\n",i);
            total++;
        }
    }
    printf("%d",total);
    getchar();
    getchar();
    return 0;
}
int judgement(int n){
    int flag=0,remain;
    int base=sqrt(n);
    static int sign[10];
    if(base*base==n){
        while(n%10>0){            
            remain=n%10;
            sign[remain]++;
            n/=10;
        }
        for(int i=0;i<10;i++){
            if(sign[i]==2){
                flag=1;
                break;
            }
        }
    }
    return flag;
}
