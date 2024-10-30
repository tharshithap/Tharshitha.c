#include <stdio.h>
void main() 
{
   int a,b;
   char op;
   printf("Enter the a,b,op values:");
   scanf("%d%d %c",&a,&b,&op);
   switch(op)
   {
       case'+':printf("the addition is %d",a+b);
                break;
       case'-':printf("the subtraction is %d",a-b);
                break;
       case'*':printf("the multiplication is %d",a*b);
                break;
       case'/':printf("the division is %d",a/b);
                break;
                
       case'%':printf("the modulo is %d",a%b);
                break;
    default:printf("Invalid operator!");
            break;
   }
}
