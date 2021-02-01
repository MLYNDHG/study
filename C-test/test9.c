#include<stdio.h>
void func(int *a,int b[]){
    b[0]=*a+6;
}
int main(){
    int a,b[5];
    a=0;
    b[0]=3;
    func(&a,b);
    printf("%d",b[0]);
    getchar();
    getchar();
    return 0;
}
