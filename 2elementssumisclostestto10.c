#include <stdio.h>
int main() {
    int a[100], n, closest = 10,num1 = 0, num2 = 0,closestSum ; 

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
    }

    

    for (int i = 0; i < n; i++) 
    {
    for (int j = i + 1; j < n; j++)
     {
          int currentSum = a[i] + a[j];
            int diff = (currentSum - closest); 
            
            
            if (diff < (closestSum - closest)) 
            {
                closestSum = currentSum;
                num1 = a[i]; 
                num2 = a[j];
            }
      } 
    }

   
    printf("The two elements whose sum is closest to %d are: %d and %d\n", closest, num1, num2);
    printf("Their sum is: %d\n", closestSum);

    return 0;
}
