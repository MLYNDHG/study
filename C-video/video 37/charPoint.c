#include<stdio.h>
void main(){
    char *name[]={"Huang","Jie","Pang","Yan"};
    char **PP;
    for(PP=name;PP<name+4;PP++){
        // printf("%s",(*PP));
        printf("%c",(**PP+1));
    }
    getchar();
}