#include<stdio.h>
int main()
{
  int mark;
  scanf("%d",&mark);
  if(mark<=100&&mark>=90)
    {
    printf("grade A");
    }
  else if(mark<90&&mark>=70)
    {
    printf("grade B");
    }
  else if (mark<70&&mark>=50)
    {
    printf("grade C");
    }
  else (mark<50&&mark>=0)
   {
    printf("grade D");
   } 
  return 0;
}
