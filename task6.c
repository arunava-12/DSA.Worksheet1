#include <stdio.h>

struct Employee {
    int employeeID;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[3];
    int highestSalaryIndex = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    for (int i = 1; i < 3; i++) {
        if (employees[i].salary > employees[highestSalaryIndex].salary) {
            highestSalaryIndex = i;
        }
    }

    printf("\nHighest Salary Employee:\n");
    printf("Employee ID: %d, Name: %s, Salary: %.2f\n", employees[highestSalaryIndex].employeeID, employees[highestSalaryIndex].name, employees[highestSalaryIndex].salary);

    return 0;
}
