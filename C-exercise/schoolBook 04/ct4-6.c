#include<stdio.h>
int main(void){
    printf("���뱻������0~100��������²����");
    int mynumber,n,yourname,i=1;
    scanf("%d%d",&mynumber,&n);
    do{
        printf("����²����\n");
        scanf("%d",&yourname);
        if(yourname<0){
            printf("Game Over\n");
        }
        if(yourname>mynumber){
            printf("�²����ƫ��\n");
        }else if(yourname<mynumber){
            printf("�²����ƫС\n");
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