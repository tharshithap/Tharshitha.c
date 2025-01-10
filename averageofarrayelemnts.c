// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    int a[10],n,i,sum=0;
    float avg;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum+a[i];
    } 
    avg=sum/n;
    printf("the sum of the elements of the array is %d\n",sum);
    printf("the average of the elements of the array is %.1f",avg);
}
