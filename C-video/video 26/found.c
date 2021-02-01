/**
 * 输入5个整数，将它们存入数组a中，再输
    入1个数x，然后在数组中查找x，如果找
    到，输出相应的下标，否则，输出“Not
    Found".
*/
#include<stdio.h>
void main(){
    int num[5];
    int x;
    printf("请输入五个数字");
    for(int i=0;i<5;i++){
        scanf("%d",&num[i]);
    }
    printf("请再输入一个查找数");
    scanf("%d",&x);
    printf("当前这个数的出钱位置有");
    int sign=-1;
    for(int i=0;i<5;i++){
        if(num[i]==x){
            sign=i+1;
            printf("当前这个查找数的位置在数组的%d号位上",i+1);
        }
    }
    if(sign==-1){
        printf("NOT FOUND");
    }
    getchar();     
    getchar();    
    getchar();   
}