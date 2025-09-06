#include<stdio.h>
void main(){
    int a,reversed=0,d;
    printf("\n enter a number");
    scanf("%d",&a);
    while(a>0){
        d=a%10;
        reversed=(reversed*10) + d;
        a=a/10;
    }
    printf("the number in reversed format is  %d",reversed);
}