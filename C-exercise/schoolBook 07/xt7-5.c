#include<stdio.h>
int main(void){
    printf("����һ��������(1~6)\n");
    int n,a[6][6],max=0;
    scanf("%d",&n);
    printf("��¼��%d��������\n",n*n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int lineAddition[6],temp,cols1,row1,cols2,flag=0;
    //���ҳ�ÿһ�������Ǹ����ĺ�����
    for(int i=0;i<n;i++){   
        temp=-1,cols1=-1,row1=-2,cols2=-3;//ʹ�䲻Ӱ����һ��
        for(int j=0;j<n;j++){            
            if(temp<a[i][j]){
                //����������꼰ֵ
                temp=a[i][j];
                cols1=i;
                row1=j;
            }
        }
        //�ٱ�����ǰ��һ�е�ֵ������ֵ�ĺ������ǲ����Ϸ������������
        temp=-2;
        for(int j=0;j<n;j++){            
            if(temp<a[j][row1]){
                //����������꼰ֵ
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
        printf("�а����%d�е�%d��,ֵΪ%d\n",cols1,row1,temp);
    }else{
        printf("NO");
    }    
    getchar();
    getchar();
    return 0;
}