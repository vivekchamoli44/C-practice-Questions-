#include<stdio.h>
void main(){
    int m=3,n=3,i,j;
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the [%d][%d] term",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==m-1){
                a[i][j]=a[i][j]-a[i-1][j]+a[0][j];
            }
        }
    }
    printf("Final matrix after row transformation:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}