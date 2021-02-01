#include<stdio.h>
int main(){
    printf("输入最低华氏温度、最高华氏温度，用空格隔开");
    int lower,upper;
    float celsius;
    scanf("%d%d",&lower,&upper);
    if(lower<=upper+2){
        printf("fahr\tcelsius\n");
        for(lower;lower<upper+2;lower+=2){
            celsius=5*(lower-32)/9;
            printf("%d\t%.2f\n",lower,celsius);
        }
    }else{
        printf("Invaild value\n");
    }
    getchar();
    getchar();
    getchar();
}