#include<stdio.h>
char *month_name(int n);
main(){
//   char *a=;
  printf("%s",month_name(1));
  getchar();
}

char *month_name(int n){
    static char *name[]={
        "Illegal month",
        "January","February","March",
        "April","May","June",
        "July","August","September",
        "October","November","December",
    };
    return (n>1||n<12)?name[n]:name[0];
}