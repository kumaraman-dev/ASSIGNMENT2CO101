#include <stdio.h>
int main()
{
   int n, sum = 0, r,i;

   printf("Enter a number\n");
scanf("%d",&n);
i=n;
   for (i; i != 0; i= i/10) {
      r = i % 10;
      sum = sum + r;
   }

   printf("Sum of digits of a number = %d\n", sum);

   return 0;
}