#include<stdio.h>
void main(){
    int a[10];
    int n,i,el;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("\n enter the elements ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n enter the element to delete");
    scanf("%d",&el);
    printf("\n the array before deletion ");
        for(i=0;i<n;i++){
            printf("\t %d",a[i]);
        }
    for(i=0;i<n;i++){
        if(a[i]==el){
            n--;
            break;
        }
       for(;i<n;i++)
       a[i]=a[i+1];
        printf("\n the array after deletion ");
        for(i=0;i<n;i++){
            printf("\t %d",a[i]);
        }
    }
}