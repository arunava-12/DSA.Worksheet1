#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int totalMarks;
};

int main() {
    struct Student students[5]; 

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Total Marks: ");
        scanf("%d", &students[i].totalMarks);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: Name: %s, Age: %d, Total Marks: %d\n", i + 1, students[i].name, students[i].age, students[i].totalMarks);
    }

    return 0;
}
