#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Dynamically allocate memory for a struct Student
    struct Student *s = (struct Student*)malloc(sizeof(struct Student));

    // Input data using pointer
    printf("Enter name, roll number, and marks: ");
    scanf("%s %d %f", s->name, &s->roll, &s->marks);

    // Modify data using pointer and -> operator
    s->marks += 5; // Example: add 5 marks

    // Display data using pointer and -> operator
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll);
    printf("Marks: %.2f\n", s->marks);

    // Free the allocated memory
    free(s);

    return 0;
}