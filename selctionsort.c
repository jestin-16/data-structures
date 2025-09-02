#include<stdio.h>
void main()
{
    int a[10];
    int n,j,i;
    printf("\n enter the number of elements ");
    scanf("%d",&n);
    printf("\n enter the  elements ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n the array after sort is ");
    for(i=0;i<n;i++)
    printf("\t %d",a[i]);
}