#include<stdio.h>
#include<math.h>
/**
 * L=根（y2-y1的平方+x2-x1的平方）
*/
int main(void){
    printf("输入三个点的坐标，格式(x1,y1),(x2,y2),(x3,y3)\n");
    int x1,x2,x3,y1,y2,y3;
    scanf("(%d,%d),(%d,%d),(%d,%d)",&x1,&y1,&x2,&y2,&x3,&y3);
    float L1,L2,L3,C,S;//三条边的长度
    L1=sqrt((pow((y2-y1),2)+pow((x2-x1),2)));
    L2=sqrt((pow((y3-y2),2)+pow((x3-x2),2)));
    L3=sqrt((pow((y1-y3),2)+pow((x1-x3),2)));
    if((L1+L2>L3)&&(L2+L3>L1)&&(L1+L3>L2)){
        printf("三点构成了一个三角形\n");
        C=L1+L2+L3;
        float temp=(L1+L2+L3)/2;
        S=sqrt(temp*(temp-L1)*(temp-L2)*(temp-L3));
        printf("周长为：%.2f\n面积为：%.2f\n",C,S);
    }else{
        printf("Impossible");
    }
    getchar();
    getchar();
    return 0;
}