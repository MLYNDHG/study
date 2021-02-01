#include<stdio.h>
int main(void){
    printf("输入字符1~80（#结束）");
    char str[80],i=0,flag=1;
    long temp=0;
    while((str[i]=getchar())!='#'){
        if(i==0&&str[i]=='-'){
            flag=0;
            i++;
        }
        if(str[i]>='0'&&str[i]<='9'||str[i]>='A'&&str[i]<='F'||str[i]>='a'&&str[i]<='f'){            
            i++;
        }
    }
    str[i]='\0';
    i=0;    
    printf("十六进制字符：");
    while(str[i]!='\0'){
        putchar(str[i]);
        i++;        
    }
    i=1;
    if(flag){        
        i=0;
    }    
    while(str[i]!='\0'){
        if(str[i]>='0'&&str[i]<='9'){
            temp=temp*16+str[i]-'0';
        }else  if(str[i]>='A'&&str[i]<='F'){
            temp=temp*16+str[i]-'A'+10;
        }else  if(str[i]>='a'&&str[i]<='f'){
            temp=temp*16+str[i]-'a'+10;
        }
        i++;        
    }
    if(!flag){        
        temp=-1*temp;;
    }
    printf("\n十进制输出:%ld",temp);
    getchar();
    getchar();
    return 0;
}