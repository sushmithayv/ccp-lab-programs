#include <stdio.h>
int main()
{
   int first, second, *p, *q, sum,mul,div,reminder,sub;

   printf("Enter two integers to add\n");
   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;

   sum = *p + *q;
   sub = *p - *q;
   mul = *p * *q;
   div = *p / *q;
   reminder = *p % *q;
   printf("Sum of the numbers = %d\n", sum);
   printf("Subtraction of the numbers = %d\n", sub);
   printf("Multiplication of the numbers = %d\n", mul);
   printf("Division of the numbers = %d\n", div);
   printf("Reminder of the numbers = %d\n", reminder);
   return 0;
}
