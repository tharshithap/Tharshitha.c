#include <stdio.h>
void main() 
{
   int n;
   printf("Enter the number:");
   scanf("%d",&n);
   switch(n%2)
   {
     case 1: printf("the given number is even");
             break;
     default:printf("the given number is odd");
            break;
   }
}
