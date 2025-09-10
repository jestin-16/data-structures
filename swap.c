#include<stdio.h>
void main(){
    int a,b,temp;
    printf("\n enter the two numbers ");
    scanf("%d%d",&a,&b);
    printf("the number before swap is a = %d  b =%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n the numbers after swap is a=  %d b= %d",a,b);
}