#include<stdio.h>
int main(void){
    printf("计算器：请输入(计算整数、输入等号输出)\n");
    char ch;
    int sum=0,ahead=1,temp=0;//ahead  1标识当前字符前一个字符为数字0标识为运算符
    char calchar=' ';
    while (ch=getchar())
    {               
        if(ch>='0'&&ch<='9'||ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='='){
            //前一个字符是数字的情况
            if(ahead){                
                //前一个字符不是数字的情况
                if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='='){   
                    if(calchar==' '){
                        sum=temp;
                    }else{
                        switch(calchar){
                            case '+':
                                sum+=temp;
                                break;
                            case '-':
                                sum-=temp;
                                break;
                            case '*':
                                sum*=temp;
                                break;
                            case '/':
                                sum/=temp;
                                break;
                        }
                    }   
                    if(ch=='='){
                        printf("%d",sum);               
                        break;
                    }                                
                    ahead=0;
                    calchar=ch;
                    temp=0;           
                }else{
                    temp=temp*10+(ch-'0');
                    ahead=1;
                }
            }else{                
                if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='='){
                    if(ch=='='){
                        printf("error：表达式出错");              
                        break;
                    } 
                    printf("error：表达式出错");   
                    break;
                    ahead=0;                            
                }else{
                    temp=(ch-'0');
                    ahead=1;
                }
            }                      
        }else{
            printf("error：不可计算");
        }        
    }
    getchar();
    getchar();
    getchar();
    getchar();
    return 0;
}