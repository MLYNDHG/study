#include<stdio.h>
/**
 * ���ı��еĸ�����ո񻻳�һ���ո�
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
