#include<stdio.h>
/**
 * ���㻪���¶� ��F=(5/9)(��C+32)*9/5
*/
#define upper 100
#define step 10
main(){
    float celsius,fahr=0;
    printf("�����¶ȡ�F\t\t�����¶ȣ���C\n",celsius,fahr);        
    while(celsius<=upper){
        fahr=(celsius+32)*9.0/5.0;
        printf("%3.0f��F\t\t\t%6.1f��C\n",celsius,fahr);        
        celsius=celsius+step;
    }
    getchar();
}