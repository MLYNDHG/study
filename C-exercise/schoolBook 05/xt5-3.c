#include<stdio.h>
#include<math.h>
float dist(int x1,int y1,int x2,int y2);
int main(void){
    printf("输入两个坐标，输出两点之间的距离,格式(x1,y1)(x2,y2)\n");
    int x1,y1,x2,y2;
    scanf("(%d,%d)(%d,%d)",&x1,&y1,&x2,&y2);
    printf("(%d,%d)(%d,%d)两点之间的距离为：%.2f\n",x1,y1,x2,y2,dist(x1,y1,x2,y2));
    printf("finish!\n");
    getchar();
    getchar();
    return 0;
}
float dist(int x1,int y1,int x2,int y2){
    return sqrt((pow((y1-y2),2)+pow((x1-x2),2)));
}