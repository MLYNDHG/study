#include<stdio.h>
#include<math.h>
int waterflowernum(int x);
int main(void){
    printf("���������������֮��ˮ�ɻ����ĸ���\n");
    int n,m;
    scanf("%d%d",&n,&m);    
    for(int i=n;i<=m;i++){        
        if(waterflowernum(i)){
            printf("%d\n",i);
        }
    }    
    printf("finish!\n");
    getchar();
    getchar();
    return 0;
}
int waterflowernum(int x){
    int n=x,count=0,sum=0;
    //�õ�������ֵĸ��� 
    while(n>0){
        n=n/10;
        count++;
    }
    n=x;
    //����ÿһλ���ֵ�count�η�����x
    while(n>0){
        sum+=pow(n%10,count);
        n=n/10;
    }
    if(sum==x){
        return 1;
    }
    return 0;
}