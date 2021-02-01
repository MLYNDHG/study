#include<stdio.h>
/**
 * 将文本中的个多个空格换成一个空格
*/
main(){
    int c,bool=0;
    while((c=getchar())!=EOF){
        if(c==' '){
            if(bool==0){
                putchar(c);
            }               
            bool=1;  
            continue;  
        }
        bool=0;
        putchar(c); 
    }
    
}
