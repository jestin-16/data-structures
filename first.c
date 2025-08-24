#include <stdio.h>
void main()
{
    
  int a[10];
  int n,i,el;
  printf("enter the number of elements ");
  scanf("%d",&n);
  printf("enter the %d numbers ",n);
  for (i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("enter the element to be searched");
  scanf("%d",&el);
  printf("the elements in the array are ");
  for(i=0;i<n;i++)
  printf("%d \n",a[i]);
   
}
