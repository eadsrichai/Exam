#include<stdio.h>
 
int main()
{
   int n, i = 3, count, c,a,b;
 
   printf("Enter a :");
   scanf("%d",&a);
   
   printf("Enter b :");
   scanf("%d",&b);
   
 
   if ( a >= 1 )
   {
      printf("First %d prime numbers are :\n",a);
      printf("2\n");
   }
 
   for ( count = 2 ; count <= b ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         printf("%d\n", i);
         count++;
      }
      i++;
   }
 
   return 0;
}
