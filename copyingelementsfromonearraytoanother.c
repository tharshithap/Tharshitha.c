// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    int a[10],b[10],i,n;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
  }
