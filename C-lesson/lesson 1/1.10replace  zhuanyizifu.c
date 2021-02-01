#include<stdio.h>
/**
 * 将制表符换成\t
 * 将回退符符换成\b
 * 将反斜杠符换成\\
*/
main(){
    int c;
    while((c=getchar())!=EOF){
        if(c=='\t'){
            printf("\\t");
        }else if(c=='\b'){
            printf("\\b");
        }else if(c=='\\'){
            printf("\\\\");
        }  else{
            putchar(c);
        }
    }
}
