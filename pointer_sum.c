#include <stdio.h>
int main() {
    int arr[100], n, i, sum = 0;
    int *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    ptr = arr;
    for (i = 0; i < n; i++)
        sum += *(ptr + i); 
    printf("Sum of array elements = %d\n", sum);
    return 0;
}
