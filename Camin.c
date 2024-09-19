#include<stdio.h> 
main() 
{ 
int i,a,c=1; 
  scanf("%d",&a);
for(i=1; i<=a; i++) 
{ 
if(i%4==0 && i%6==0) 
{
  c*=i;
} 
} 
  printf("%d\n",c); 
} 