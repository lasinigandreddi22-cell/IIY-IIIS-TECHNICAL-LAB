#include <stdio.h>
float average(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(arr + i); 
    return (float)sum / n;
}
int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    float avg = average(arr, n);
    printf("Average = %.2f\n", avg);
    return 0;
}
