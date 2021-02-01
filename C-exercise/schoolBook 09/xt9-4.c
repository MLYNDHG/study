#include<stdio.h>
struct book{
    char name[50];
    float price;
};
int main(void){
    struct book books[10],maxprice,minprice;
    printf("请输入书的名称、价格\n");
    for(int i=0;i<4;i++){
        printf("No.%d\n",i+1);
        scanf("%s%f",books[i].name,&books[i].price);
        if(i==0){
            maxprice=books[i];
            minprice=books[i];
        }else{
            if(maxprice.price<books[i].price){
                maxprice=books[i];
            }
            if(minprice.price>books[i].price){
                minprice=books[i];
            }
        }
    }
    printf("最昂贵的书是:%s\t%.2f元",maxprice.name,maxprice.price);
    printf("最便宜的书是:%s\t%.2f元",minprice.name,minprice.price);
    getchar();
    getchar();
    return 0;
}