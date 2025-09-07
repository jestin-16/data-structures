#include<stdio.h>
void main(){
    int a,reversed=0,d,x;
    printf("\n enter a number");
    scanf("%d",&a);
    x=a;
    while(a>0){
        d=a%10;
        reversed=(reversed*10) + d;
        a=a/10;
    }
    printf("\n the number before reversed %d",x);
    printf("\n the number in reversed format is  %d",reversed);
}