#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp[100];
    int n, i, choice;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d ID: ", i + 1);
        scanf("%d", &emp[i].id);
        printf("Employee %d Name: ", i + 1);
        getchar(); 
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';
        printf("Employee %d Salary: ", i + 1);
        scanf("%f", &emp[i].salary);
    }
    printf("\n--- Employee Details ---\n");
    printf("ID\tName\tSalary\n");
    printf("--------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    return 0;
}
