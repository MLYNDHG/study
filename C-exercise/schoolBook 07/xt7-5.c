#include<stdio.h>
int main(void){
    printf("输入一个正整数(1~6)\n");
    int n,a[6][6],max=0;
    scanf("%d",&n);
    printf("请录入%d个正整数\n",n*n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int lineAddition[6],temp,cols1,row1,cols2,flag=0;
    //先找出每一行最大的那个数的横坐标
    for(int i=0;i<n;i++){   
        temp=-1,cols1=-1,row1=-2,cols2=-3;//使其不影响下一行
        for(int j=0;j<n;j++){            
            if(temp<a[i][j]){
                //保存横纵坐标及值
                temp=a[i][j];
                cols1=i;
                row1=j;
            }
        }
        //再便利当前这一列的值检查最大值的横坐标是不是上方保存的行坐标
        temp=-2;
        for(int j=0;j<n;j++){            
            if(temp<a[j][row1]){
                //保存横纵坐标及值
                temp=a[j][row1];
                cols2=j;
            }
        }
        if(cols1==cols2){
            flag=1;
            break;
        }
    }    
    if(flag){
        printf("有鞍点第%d行第%d列,值为%d\n",cols1,row1,temp);
    }else{
        printf("NO");
    }    
    getchar();
    getchar();
    return 0;
}