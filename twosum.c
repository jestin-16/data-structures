#include<stdio.h>
void main(){
    int a[10];
    int n,i,j,target,found=0;
    printf("\n enter the number of elements");
    scanf("%d",&n);
    printf("\n enter %d numbers",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("\n enter the target");
scanf("%d",&target)

for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(a[i]+a[j]==target){
            found=1;
            break;
        }
    }
}
if(!found)
print("%d \t %d",i,j);
}