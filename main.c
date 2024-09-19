#include<stdio.h>
main(){
int a,i,c=0;
  scanf("%d",&a);
  for(i=2;i<a;i+=2)
    {
    c+=i;
    }
  printf("%d",c);
}