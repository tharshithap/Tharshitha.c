
#include <stdio.h>
#include<math.h>
int main()
{
 int a,b,c;
 float r1,r2;
 printf("enter the a,b,c values:");
 scanf("%d%d%d",&a,&b,&c);
 r1=(-b+(sqrt(pow(b,2)-(4*a*c)/(2*a))));
 r2=(-b-(sqrt(pow(b,2)-(4*a*c)/(2*a))));
printf("R1 is %f\n",r1);
printf("R2 is %f\n",r2);
    return 0;
}
