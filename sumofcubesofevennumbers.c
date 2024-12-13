#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    if(i%2==0)
    {
        sum=sum+pow(i,3);
    }
    printf("The sum is :%d\n",sum);
    
    return 0;
}
