#include<stdio.h>
/**
 *1. ~(~0<<n)   ��ȡn��1�ķ���
 *2.��~(~0<<n)����(p+1-n) λ�õ� 000..01110...000
 * 
*/
unsigned setbits ( unsigned x, int  p, int n, unsigned y);
main(){
    int a= ~(~0<<3)<<2;
    // <<(4+1-3); 
    unsigned int x = 73;
    unsigned int y = 23;
    int p = 5;
    int n = 3;

    printf("%d",setbits(x,p,n,y));
    getchar();
}

/* setbits : set n bits of x at position p with bits of y */
unsigned setbits ( unsigned x, int  p, int n, unsigned y)
{
    return x &~(~(~0<< n) << (p + 1 -n)) | (y & ~(~0 <<n )) << (p + 1 - n) ;
}

     