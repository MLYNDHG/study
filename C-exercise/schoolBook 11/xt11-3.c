#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int max_len(char *s[],int n);
int main(void){    
    int n,max;
    char *weekends[10];
    printf("请输入字符个数\n");    
    scanf("%d",&n);
    char week[100];
    for(int i=0;i<n;i++){       
        printf("请输入第%d个字符串\n",i+1);    
        scanf("%s",week);
        weekends[i]=(char *)malloc(sizeof(char)*(strlen(week)+1));
        strcpy(weekends[i],week);        
    }   
    max=max_len(weekends,n);
    printf("最长的字符串%d\n",max);   
    getchar();
    getchar();
    return 0;
}
int max_len(char *s[],int n){
    int max_len=0,temp,ink;
    for(int i=0;i<n;i++){
        ink=0;
        temp=0;
        while((*(s[i]+ink))!='\0'){
            ink++;  
            temp++;          
        }
        if(temp>max_len){
            max_len=temp;
        }
    }
    return max_len;
}