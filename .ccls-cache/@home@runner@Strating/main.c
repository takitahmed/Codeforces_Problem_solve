#include<stdio.h>
main(){
int a,i,c=1;
  scanf("%d",&a);
  if((a%4 == 0) || (a%6 == 0))
  {
  for(i=1;i<a;i++)
    {
    c*=i;
    }
  }
  else 
    pirntf("doesnet exits");
  printf("%d",c);
}