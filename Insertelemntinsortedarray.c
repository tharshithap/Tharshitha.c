#include <stdio.h>
int main() {
    int arr[100], n, position, value, i;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter array elements:\n");
    for (i = 0; i <n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position: ");
    scanf("%d", &position);
    for (i = n; i > position; i--) {
        arr[i] = arr[i-1];
    }
    arr[position] = value;
    printf("Updated array: ");
    for (i = 0; i <=n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
