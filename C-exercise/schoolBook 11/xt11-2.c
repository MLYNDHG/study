#include<stdio.h>
#include<string.h>
int main(void){
    char *weekends[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    printf("请输入星期几的英文\n");
    char week[10];
    scanf("%s",week);
    int i,temp=-1;
    for(i=0;i<7;i++){
        if(strcmp(weekends[i],week)==0){
            temp=i;
            break; 
        }
    }  
    printf("%d\n",temp);   
    getchar();
    getchar();
    return 0;
}