#include<stdio.h>
struct vector{
    int x,y;
};
struct vector vec(struct vector v1,struct vector v2);
int main(void){
    struct vector v1,v2;
    printf("enter x1,y1\n");
    scanf("%d%d",&v1.x,&v1.y);
    printf("enter x2,y2\n");
    scanf("%d%d",&v2.x,&v2.y);
    printf("和向量为：%d   %d\n",vec(v1,v2).x,vec(v1,v2).y);
    getchar();
    getchar();
    return 0;
}
struct vector vec(struct vector v1,struct vector v2){
    struct vector v;
    v.x=v1.x+v2.x;
    v.y=v1.y+v2.y;
    return v;
}