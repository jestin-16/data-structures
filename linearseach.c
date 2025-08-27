#include<stdio.h>
void main(){
    int a[10];
    int n,i,el;
    int flag=0;
    printf("\n enter the number of elements ");
    scanf("%d",&n);
    printf("\n enter %d numbers",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n enter the element ");
    scanf("%d",&el);
    for(i=0;i<n;i++){
        if(a[i]==el){
            flag=1;
            break;
        }
        

    }

    if(flag==1){
        printf("\n the element is found");
    }
    else{
        printf("\n the element not found");
    }
}