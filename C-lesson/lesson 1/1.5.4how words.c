#include<stdio.h>
/**
 * 计算单词个数   行数  字符数
 * out上一个在单词外  in上一个字符在单词中
*/
#define IN 1
#define OUT 0
main(){
    int c,nc=0,nl=0,nw=0,state=OUT
    ;
    while ((c=getchar())!=EOF)
    {
        nc++;//字符数加一
        if(c=='\n'){
            nl++;
        }
        if(c=='\n'||c=='\t'||c==' '){
            state=OUT;
        }else if(state==OUT){
            state=IN; 
            ++nw;
        }
    }
    printf("单词个数：%d 字符个数：%d文本行数：%d",nw,nc,nl);
    getchar();
}
