#include<stdio.h>
struct time{
    int hour;
    int minute;
    int second;
};
int main(void){
    struct time t;
    printf("输入一个时间数值时:分:秒\n");
    scanf("%d:%d:%d",&t.hour,&t.minute,&t.second);
    if(t.hour>=24||t.minute>=60||t.second>=60){
        printf("错误\n");    
    }else{
        printf("请再输入一个过去的秒数\n");
        int second;
        scanf("%d",&second);
        for(int i=0;i<second;i++){
            t.second++;
            if(t.second==60){
                t.second=0;
                t.minute++;
                if(t.minute==60){
                    t.minute=0;
                    t.hour++;
                    if(t.hour==24){
                        t.hour=0;
                    }
                }
            }
        }
        printf("%d:%d:%d",t.hour,t.minute,t.second);
    }    
    getchar();
    getchar();
    return 0;
}