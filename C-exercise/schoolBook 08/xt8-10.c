#include<stdio.h>
#include<stdlib.h>
int main(void){
    printf("������ѧ������\n");
    int pnum;
    float *ptr,sum,average,highly,lowly;
    scanf("%d",&pnum);
    if((ptr=(float *)calloc(pnum,sizeof(float)))==NULL){
        printf("not able to allocate memory!");
    }else{        
        for(int i=0;i<pnum;i++){
            printf("�������%d��ѧ���ĳɼ�\n",i+1);
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
    printf("һ��������%d��ѧ���ĳɼ�,�ܷ���:%3.2f,ƽ������:%3.2f,��߷���:%3.2f,��ͷ���:%3.2f",pnum,sum,average,highly,lowly);
    free(ptr);
    getchar();
    getchar();
    return 0;
}