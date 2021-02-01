#include<stdio.h>
int main(void){
    int c1=0,c2=0;char ch;
    while((ch=getchar())!='#'){
        switch(ch){
            case 'a':
            case 'h':c1++;
            default:c2++;
        }
    }
    printf("c1=%d,c2=%d",c1,c2);
    getchar();
    getchar();
    return 0;
}