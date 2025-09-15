#include<stdio.h>
void main(){
int a,b,c,max=0;
printf("\n enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b){
    if(a>c){
        max=a;
    }
    else{
        max=c;
    }
    
}
else 
max=b;
}