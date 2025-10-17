#include <stdio.h>
int value(char ch) {
    if (ch == 'I') return 1;
    if (ch == 'V') return 5;
    if (ch == 'X') return 10;
    if (ch == 'L') return 50;
    if (ch == 'C') return 100;
    if (ch == 'D') return 500;
    if (ch == 'M') return 1000;
    return 0;
}
int main() {
    char roman[20];
    int i, num = 0;
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);
    for (i = 0; roman[i] != '\0'; i++) {
        int s1 = value(roman[i]);
        int s2 = value(roman[i + 1]);
        if (s1 < s2)
            num -= s1;   
        else
            num += s1;   
    }
    printf("Integer value = %d\n", num);
    return 0;
}
