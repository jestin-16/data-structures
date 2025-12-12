#include<stdio.h>
void main(){
    int n,sum=0;
    int i=1;
    printf("Enter a number upto which u want sum of n natural numbers:");
    scanf("%d",&n);
    while(i<=num){
        sum+=i;
        i++;
    }
    printf("sum of first %d natural numbers is %d",n,sum);
}