#include<stdio.h>
#include<string.h>
void fsort(char * str[],int n);
int main(void){
    int i;
    char * str[]={
        "red","black","blue","green","yellow"
    };
    fsort(str,5);
    for(i;i<5;i++){
        printf("%s\n",*(str+i));
    }
    getchar();
    getchar();
    return 0;
}
void fsort(char * str[],int n){
    char **ptr=str,*temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(strcmp(*(ptr+i),*(ptr+j))<0){
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
}