#include<stdio.h>
//1.
#define MIN(a,b) a>b?b:a
//2.
#define ISLOWER(c) (c>='a'&&c<='z')?1:-1
//3.
#define ISLEAP(y) ((y%4==0||y%100==0)&&(y%400!=0))?1:-1
//4.
#define PI 3.141592654
#define CIRCLE(r) 2*PI*r