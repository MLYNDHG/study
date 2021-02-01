#include<stdio.h>
#include<string.h>
int main(void){
    printf("请输入五个字符串：\n"); 
    char str[5][1000];
    for(int i=0;i<5;i++){
        gets(str[i]);   
    }
    //选择排序法
    //假设当前一个为最大值     二层循环将每个值与之比较  如比它大记录下标
    char max[1000],index;
    for(int i=0;i<4;i++){
        index=i;
        for(int j=i;j<5;j++){    
            if(strcmp(str[i],str[j])<0){            
                index=j;
            } 
        }
        int m;
        for(m=0;*(str[index]+m)!='\0';m++){
            max[m]=*(str[index]+m);
        }    
        max[m]='\0';
        int k;
        for(k=0;*(str[i]+k)!='\0';k++){
            *(str[index]+k)=*(str[i]+k);
        }
        *(str[index]+k)='\0';
        for(k=0;max[k]!='\0';k++){
            *(str[i]+k)=max[k];
        }
        *(str[i]+k)='\0';
    }
    for(int i=0;i<5;i++){
       puts(str[i]);
    }    
    getchar();
    getchar();
    return 0;
}