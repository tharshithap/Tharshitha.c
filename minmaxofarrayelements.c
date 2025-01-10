// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    int a[10],n,i,min,max;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
 for(i=0;i<n;i++)
     {
        if(a[i]<min)
        {
        min=a[i];
        }
     }
    printf("the max no is %d\n",max);
    printf("the min no is %d\n",min);
}
