#include<stdio.h>
int main(void){
    int a[10];
    printf("ÇëÊäÈë10¸öÊı");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("After sorted ,a[10]=");
    void chooseSort(int *a,int n);
    chooseSort(a,10);
    for(int i=0;i<10;i++){
        printf("%d  ",a[i]);
    }
    getchar();
    getchar();
    return 0;
}
void chooseSort(int *a,int n){
    int i,j,index,temp;
    for(i=0;i<n-1;i++){
        index=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[index]){
                index=j;            
            }           
        }   
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
}