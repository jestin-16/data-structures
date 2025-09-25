#include<stdio.h>
void main(){
    int a[5][5];
    int n,m,i,j;
    printf("\n enter the order of the matrix");
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf(" the array in matrix format is ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d",a[i][j];)
        }
        printf("\n");
    }
}