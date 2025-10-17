#include <stdio.h>
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}
int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    printf("Steps to solve Tower of Hanoi:\n");
    hanoi(n, 'A', 'C', 'B'); // A = source, C = target, B = auxiliary
    return 0;
}
