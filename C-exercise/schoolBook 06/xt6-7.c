#include<stdio.h>
int main(void){
    printf("��������������(��������������Ⱥ����)\n");
    char ch;
    int sum=0,ahead=1,temp=0;//ahead  1��ʶ��ǰ�ַ�ǰһ���ַ�Ϊ����0��ʶΪ�����
    char calchar=' ';
    while (ch=getchar())
    {               
        if(ch>='0'&&ch<='9'||ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='='){
            //ǰһ���ַ������ֵ����
            if(ahead){                
                //ǰһ���ַ��������ֵ����
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
                        printf("error�����ʽ����");              
                        break;
                    } 
                    printf("error�����ʽ����");   
                    break;
                    ahead=0;                            
                }else{
                    temp=(ch-'0');
                    ahead=1;
                }
            }                      
        }else{
            printf("error�����ɼ���");
        }        
    }
    getchar();
    getchar();
    getchar();
    getchar();
    return 0;
}