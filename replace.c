#include<stdio.h>

void main(){
    int a[10];
    int n,i,el;
    printf("enter the number of elements ");
    scanf("%d",&n);
    printf("enter the %d elements ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("\n enter the elemet to replace with zero");
scanf("%d",&el);
for(i=0;i<n;i++){
    printf("%d",a[i]);
}
for(i=0;i<n;i++){
    if(a[i]==el)
    a[i]=0;
}
for(i=0;i<n;i++){
    printf("\n %d",a[i]);
}
}