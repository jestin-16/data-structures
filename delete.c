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
    for(i=0;i<n;i++){
        if(a[i]==el){
            for(int j=i;j<n;j++){
                a[i]=a[j+1];
            }
            n--;
        }
        else {
            /* code here */ 
            continue;
        }
        printf("the array after deletion ");
        for(i=0;i<n;i++){
            printf("\t %d",a[i]);
        }
    }
}