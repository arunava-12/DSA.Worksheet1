#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int totalMarks;
};

int main() {
    struct Student students[2];
    int totalMarks = 0;

    // Input student information
    for (int i = 0; i < 2; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Total Marks: ");
        scanf("%d", &students[i].totalMarks);
        totalMarks += students[i].totalMarks;
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d: Name: %s, Age: %d, Total Marks: %d\n", i + 1, students[i].name, students[i].age, students[i].totalMarks);
    }

    printf("Average Total Marks: %.2f\n", totalMarks / 2.0);

    return 0;
}
