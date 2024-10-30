#include <stdio.h>
void main() 
{
   int mat,chem,phy,eng,computer;
   float avg;
   printf("Enter the marks of mat chem phy eng computer:");
   scanf("%d%d%d%d%d");
   avg=((chem+mat+phy+eng+computer)/5);
   if(avg>90)
   {
      printf("A+");
      
   }
   else if(80>avg>90)
   {
       printf("A");
   }
}
