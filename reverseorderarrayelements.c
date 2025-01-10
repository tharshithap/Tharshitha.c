// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    int a[10],i,n;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
    printf("%d\t",a[i]);
    } 
  }
