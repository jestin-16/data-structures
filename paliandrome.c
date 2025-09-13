#include<stdio.h>
void main(){
    int num,n;
    int d,r=0,;
    printf("\n enter a number");
    scanf("%d",&num);
    n=num;
    while(num>0){
        d=num%10;
        r=r*10+d;
        num/=10;
    }

    if(n==r)
    printf("\n paliandrome");
else
printf("\n not paliandrome");

}