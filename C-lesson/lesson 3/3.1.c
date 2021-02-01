#include<stdio.h>
#include<time.h>
/**
 * 程序运行时间
 * 
*/
main(){
    clock_t start,finish;
    double duration;
    start=clock();
    printf("我是你爹");
    for (int i = 0; i < 1000000000; i++)
    {
        
    }
    
    finish=clock();
    duration=(double)(finish-start)/CLOCKS_PER_SEC;
    printf("%f s",duration);
    getchar();
}