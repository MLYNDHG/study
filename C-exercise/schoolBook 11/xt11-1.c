#include<stdio.h>
int main(void){
    char *month[12]={"January","Febuary","March","April",
    "May","June","July","August",
    "september","October","November","December"};
    printf("«Î ‰»Î‘¬∑›£®1~12£©");
    int n;
    scanf("%d",&n);
    if(n<1||n>12){
        printf("error");   
    }else{
        printf("%s",month[n-1]);   
    } 
    getchar();
    getchar();
    return 0;
}