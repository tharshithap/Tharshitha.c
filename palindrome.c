#include <stdio.h>
#include<math.h>
int main()
{
    int n,rem,rev=0,original;
    printf("Enter the n value:");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("The rev is:%d\n",rev);
    if(original==rev)
    {
        printf("The given number is palindrome");
        
    }
    else
    {
        printf("The given number is not palindrome");
    }
    return 0;
}
