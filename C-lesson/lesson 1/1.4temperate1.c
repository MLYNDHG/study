#include<stdio.h>
/**
 * ���������¶�  ��C=(5/9)(��F-32)
*/
main(){
    float celsius,fahr=0;
    int upper=300,step=20;
    printf("�����¶ȡ�F\t\t�����¶ȣ���C\n",fahr,celsius);        
    while(fahr<=upper){
        celsius=(fahr-32)*5.0/9.0;
        printf("%3.0f��F\t\t\t%6.1f��C\n",fahr,celsius);        
        fahr=fahr+step;
    }
    printf("\n\n\n\n\n");
    float C,F;
    for(F=upper;F>=0;F=F-step){
        C=(F-32)*5.0/9.0;
        printf("%3.0f��F\t\t\t%6.1f��C\n",F,C);
    }  
    getchar();
}