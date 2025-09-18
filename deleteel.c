#include<stido.h>
void main(){
    int a[10];
    int n,i,el;
    printf("\n enter the number of elements ");
    scanf("%d",&n);
    printf("\n enter %d elements ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\n enter the element to delete");
    scanf("%d",&el);
    for(i=0;i<n;i++){
        if(a[i]==el){
            a[i]==a[i+1];
        }
        n--;
    }
    for(i=0;i<n;i++)
    printf("%d \t",a[i]);
}