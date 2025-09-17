#include<stdio.h>
void main(){
int a[10];
int n,i,el,pos;
printf("\n enter the number of elements");
scanf("%d",&n);
printf("\n enter the %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter the element to be inserted");
scanf("%d",&el);
printf("\n enter the position the element to be inserted");
scanf("%d",&pos);
if(pos<0 || pos+1>n){
    printf("\n invalid position")
}else{
    for(i=n-1;i>=pos;i++){
        a[i+1]=a[i];
    }
    a[pos]=el;
    n++;
}
for(i=0;i<n;i++)
printf("\t %d",a[i]);

}