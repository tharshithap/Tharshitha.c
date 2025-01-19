#include <stdio.h>
int main() {
    int arr[100], size, position, i;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to delete: ");
    scanf("%d", &position);
if(position >0 || position>=size)
{
printf("invalid position ");
}
    for (i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("New array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
