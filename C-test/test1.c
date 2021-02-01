#include<stdio.h>
int main(void){
    // int a[3][3]={{1,2},{3,4},{4,6}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d  ",a[i][j]);
    //     }   
    //     printf("\n");
    // }

    // char s[100];int c,i;
    // scanf("%c",&c);
    // scanf("%d",&i);
    // scanf("%s",s);
    // printf("%c,%d,%s",c,i,s);
    //
    //
    //
    // char p[]={'a','b','c'};
    // char q[10]={'a','b','c'};
    // printf("%d,%d",strlen(p),strlen(q));

    // int p[7]={11,13,14,15,16,17,18};
    // int i=0,j=0;
    // while(i<7&&p[i]%2==1){
    //     j+=p[i++];
    // }


    int a[4][4]={{1,2,3,4},{5,6,7,8},{11,12,13,14},{15,16,17,18}};
    int i=0,j=0,s=0;
    while(i++<4){
        if(i==2||i==4){
            continue;
        }
        j=0;
        do{
            s+=a[i][j];
            j++;
        }while(j<4);
        printf("%d",s);
    }

    printf("%d\n",j);
    getchar();
    getchar();
    return 0;
}