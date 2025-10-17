#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *f1, *f2, *f3;
    char ch;
    f1 = fopen("file1.txt", "r");
    if (f1 == NULL) {
        printf("Cannot open file1.txt\n");
        return 1;
    }
    f2 = fopen("file2.txt", "r");
    if (f2 == NULL) {
        printf("Cannot open file2.txt\n");
        fclose(f1);
        return 1;
    }
    f3 = fopen("merged.txt", "w");
    if (f3 == NULL) {
        printf("Cannot create merged.txt\n");
        fclose(f1);
        fclose(f2);
        return 1;
    }
    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, f3);

    // Copy content from second file
    while ((ch = fgetc(f2)) != EOF)
        fputc(ch, f3);

    printf("Files merged successfully!\n");

    // Close files
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}
