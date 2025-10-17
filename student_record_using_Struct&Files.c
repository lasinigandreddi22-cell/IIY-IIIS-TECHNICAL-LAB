#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    FILE *f;
    struct Student s;
    int choice;
    printf("1. Add record\n2. Show records\nEnter choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        f = fopen("stud.dat", "ab"); // append in binary mode
        if (f == NULL) {
            printf("Cannot open file!\n");
            return 1;
        }
        printf("Enter ID: ");
        scanf("%d", &s.id);
        printf("Enter Name: ");
        getchar(); // consume newline
        fgets(s.name, sizeof(s.name), stdin);
        s.name[strcspn(s.name, "\n")] = '\0';
        printf("Enter Marks: ");
        scanf("%f", &s.marks);
        fwrite(&s, sizeof(s), 1, f);
        printf("Record added!\n");
        fclose(f);
    } 
    else if (choice == 2) {
        f = fopen("stud.dat", "rb");
        if (f == NULL) {
            printf("No records found!\n");
            return 1;
        }
        printf("\nID\tName\tMarks\n");
        printf("-----------------------\n");
        while (fread(&s, sizeof(s), 1, f)) {
            printf("%d\t%s\t%.2f\n", s.id, s.name, s.marks);
        }

        fclose(f);
    } 
    else {
        printf("Invalid choice!\n");
    }
    return 0;
}
