#include<stdio.h>
#include<time.h>
/**
 * ��������ʱ��
 * 
*/
main(){
    clock_t start,finish;
    double duration;
    start=clock();
    printf("�������");
    for (int i = 0; i < 1000000000; i++)
    {
        
    }
    
    finish=clock();
    duration=(double)(finish-start)/CLOCKS_PER_SEC;
    printf("%f s",duration);
    getchar();
}