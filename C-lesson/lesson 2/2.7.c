#include<stdio.h>
/**
 * 
*/
unsigned invert(int x,int p,int n);
void TenToTwo(int ten);
main(){
    unsigned int x = 73;
    int p = 5;
    int n = 3;

    printf("%d",invert(x,p,n));
    getchar();
}

void TenToTwo(int ten) {
    int two[100];
    int shang = ten;
    int yu;
    int i = 0;
    while (shang != 0) {
        yu = shang % 2;
        shang = shang / 2;
        two[i++] = yu;
    }
    for (int j = i - 1; j >= 0; --j) {
        printf("%d", two[j]);
    }
    printf("\n");
}
unsigned invert(int x,int p,int n){
    // return ~((x&~(~0<<n)<<(p+1-n))>>(p+1-n))     x&~(~(~0<<n)<<(p+1-n));
     return x ^ (~(~0<<n) << (p-n));
}
