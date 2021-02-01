#include <stdio.h>

void swap(int *a, int *b){ 
    int t, *tp;
    t=*a;*a=*b; *b= t;
    
    tp= a; 
    a=b; 
    b= tp;
    printf("%d,%d,", *a,*b);
}
int main(){ 
    int i=3, j=7, *p=&i, *q=&j;
    swap(p, q);
    printf("%d,%d,%d,%d",i,j, *p, *q);
    getchar();
    getchar();
}