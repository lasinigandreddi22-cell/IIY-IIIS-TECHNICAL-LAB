#include <stdio.h>
float average(int arr[], int n) {
    int sum = 0, i;
    for (i = 0; i < n; i++)
        sum += arr[i];
    return (float)sum / n;
}
int main() {
    int arr[100], n, i;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    avg = average(arr, n);
    printf("Average = %.2f\n", avg);

    return 0;
}
