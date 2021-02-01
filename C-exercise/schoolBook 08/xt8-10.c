#include<stdio.h>
#include<stdlib.h>
int main(void){
    printf("请输入学生人数\n");
    int pnum;
    float *ptr,sum,average,highly,lowly;
    scanf("%d",&pnum);
    if((ptr=(float *)calloc(pnum,sizeof(float)))==NULL){
        printf("not able to allocate memory!");
    }else{        
        for(int i=0;i<pnum;i++){
            printf("请输入第%d个学生的成绩\n",i+1);
            scanf("%f",ptr+i);
            sum+=*(ptr+i);
        }
        average=sum/pnum*1.0;
        highly=*ptr;
        lowly=*ptr;
        for(int i=1;i<pnum;i++){
            if(highly<*(ptr+i)){
                highly=*(ptr+i);
            }
            if(lowly>*(ptr+i)){
                lowly=*(ptr+i);
            }
        }
    }
    printf("一共输入了%d个学生的成绩,总分是:%3.2f,平均分是:%3.2f,最高分是:%3.2f,最低分是:%3.2f",pnum,sum,average,highly,lowly);
    free(ptr);
    getchar();
    getchar();
    return 0;
}