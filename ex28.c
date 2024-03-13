#include <stdio.h>

int main()
{
   int a[5]={3, 18, 17, 21, 150};
   int b=0;
   a[2] = 32;
   while ( b < 5)
   {
      printf("%d\n", a[b]);
      b = b + 1;
   }
   
}