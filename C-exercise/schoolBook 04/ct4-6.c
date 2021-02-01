#include<stdio.h>
int main(void){
    printf("输入被猜数（0~100）与允许猜测次数");
    int mynumber,n,yourname,i=1;
    scanf("%d%d",&mynumber,&n);
    do{
        printf("输入猜测的数\n");
        scanf("%d",&yourname);
        if(yourname<0){
            printf("Game Over\n");
        }
        if(yourname>mynumber){
            printf("猜测的数偏大\n");
        }else if(yourname<mynumber){
            printf("猜测的数偏小\n");
        }else{
            if(i==1){
                printf("Bingo\n");
                break;
            }else if(i<=3){
                printf("Lucky You\n");
                break;
            }else if(i>3&&i<=n){
                printf("Good Guess\n");
                break;
            }else{
                printf("Game Over\n");
                break;
            }
        }
        i++;
    }while(i<=n);
    getchar();
    getchar();
    return 0;
}