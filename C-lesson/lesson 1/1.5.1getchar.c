#include<stdio.h>
main(){
    int c;
    while(c=(getchar())!=EOF){
        printf("c is %d\n",c);
    }
    printf("c is %d\n",c);
    getchar();
}