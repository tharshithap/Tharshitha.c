#include <stdio.h>
int main()
{
    int i,n,mul;
    printf("Enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        mul=n*i;
    printf("%d*%d=%d\n",n,i,mul);
    }
    
    return 0;
}
