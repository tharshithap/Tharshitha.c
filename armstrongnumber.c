#include <stdio.h>
#include<math.h>
int main()
{
    int n,rem,sum=0,cube,original;
    printf("Enter the n value:");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+pow(rem,3);
        n=n/10;
    }
    printf("The sum is :%d\n",sum);
    if(original==sum)
    {
        printf("The given number is armstrong");
        
    }
    else
    {
        printf("The given number is not armstrong");
    }
    return 0;
}
