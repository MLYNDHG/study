#include<stdio.h>
int main(void){
    int a[3][2];
    printf("ÊäÈë6¸öÊı\n");    
    for(int j=0;j<2;j++){   
        for(int i=0;i<3;i++){         
            scanf("%d",&a[i][j]);
        }  
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){           
            printf("%d",a[i][j]);   
        } 
        printf("\n");
    }           
    getchar();
    getchar();
    return 0;
}