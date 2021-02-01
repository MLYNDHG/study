#include<stdio.h>
int main(){
    printf("how many students?");
    int n,A=0,B=0,C=0,D=0,E=0;
    float grade;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("输入第%d个学生的成绩",i);        
        scanf("%f",&grade);
        if(grade>=90){
            A++;
        }else if(grade>=80&&grade<90){
            B++;
        }else if(grade>=70&&grade<80){
            C++;
        }else if(grade>=60&&grade<70){
            D++;
        }else{
            E++;
        }
    }
    printf("A:%d\tB:%d\tC:%d\tD:%d\tE:%d\t",A,B,C,D,E);
    getchar();
    getchar();
}