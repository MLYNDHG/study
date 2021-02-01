#include<stdio.h>
/**
 * 返回字符串中最右侧出现的位置
*/
int strRindex(char str[]);
main(){
    char str[100]={'d','d','d','t','d','d','d','t','d','d','\n'};
    printf("%d",strRindex(str));
    getchar();
}

int strRindex(char str[]){
    int i=0,Rindex=0;
    while (str[i])
    {
        if(str[i]=='t'){
            if(Rindex<=i+1){
                Rindex=i+1; 
            }                        
        }
        if(str[i]=='\n'){                        
            return Rindex;        
        }
        i++;
    }
    return -1;
}