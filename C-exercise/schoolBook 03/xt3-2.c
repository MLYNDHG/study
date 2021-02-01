#include<stdio.h>
int main(void){
    printf("输入当前车速、车道限速");
    float carSpeed,roadSpeed;
    scanf("%f%f",&carSpeed,&roadSpeed);
    if(carSpeed>roadSpeed*1.5){
        printf("吊销驾驶证");
    }else if(carSpeed>roadSpeed*1.1){
        printf("200元罚款");
    }else{
        printf("safety");
    }
    getchar();
    getchar();
    return 0;
}