#include<stdio.h>
void sum(int [][3],int,int [][3]);
void main(){
    int m,o,i,j;
    printf("Enter the no of rows for first marix:");
    scanf("%d",&m);
    int a[m][3];
    printf("Enter the no of rows for second matrix");
    scanf("%d",&o);
    int b[o][3];
    printf("For first matrix");
    for(i=0;i<m;i++){
        for(j=0;j<3;j++){
            printf("Enter the %d%dth element",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("For second matrix");
    for(i=0;i<o;i++){
        for(j=0;j<3;j++){
            printf("Enter the %d%dth element",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    if(m==o){
        sum(a,m,b);
    }
    else{
        printf("Addition not possible");
    }
    

}
void sum(int a[][3],int m,int b[][3]){
    int i,j;    
    for(i=0;i<m;i++){
            for(j=0;j<3;j++){
                a[i][j]=a[i][j]+b[i][j];
            }
        }
        for(i=0;i<m;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}