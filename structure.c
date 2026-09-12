#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student student;

    printf("Enter roll number: ");
    scanf("%d", &student.rollNo);

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
