#include<stdio.h>
void main(){
    int num,r,d=0,rev;
    
    printf("\n enter the number");
    scanf("%d",&num);
    rev=num;
    while(num>0){
        r=num%10;
        d+=r*r*r;
        num/=10;
    }
    if(d==rev)
    printf("\n armstrong");
else
printf("\n not armstrong");
}