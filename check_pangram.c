#include <stdio.h>
int main() {
    char str[200];
    int i, j, flag = 1;
    int found[26] = {0}; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        if (ch >= 'a' && ch <= 'z') {
            j = ch - 'a';
            found[j] = 1;
        }
    }
    for (i = 0; i < 26; i++) {
        if (found[i] == 0) {
            flag = 0; 
            break;
        }
    }
    if (flag == 1)
        printf("The string is a pangram.\n");
    else
        printf("The string is NOT a pangram.\n");

    return 0;
}
