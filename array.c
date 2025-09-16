#include<stdio.h>
void main(){
    int a[10];
    int i,n;
    printf("\n enter the number of elements ");
    scanf("%d",&n);
    printf("\n enter the  elements ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("\n the elements in the array are ");
for(i=0;i<n;i++)
printf("\t %d",a[i]);
}