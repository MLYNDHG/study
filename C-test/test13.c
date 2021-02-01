#include<stdio.h>
static int wuhu(){
        int a[10],i=1;
        char str[10],str2[10];
        // for(int i=0;i<10;i++){
        //     printf("%d   \n",a[i]);
        // }
        // scanf("%s%s",str,str2);
        // printf("%s%s",str,str2);
        printf("%d%d%d%d",i,--i,i++,++i);
        return 0;
}
int main(){
    wuhu();
    getchar();
    getchar();
    getchar();
}