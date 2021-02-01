//ц╟ещеепР
#include<stdio.h>
void sort(int *num,int n);
void main(){
    int num[10];
    for(int a=0;a<10;a++)
        scanf("%d",&num[a]);
    sort(num,10);
  
    getchar();
    getchar();
}
void sort(int *num,int n){
  int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(num[j]>num[j+1]){
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d",num[i]);
    }
}