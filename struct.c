#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks[2];   // 2 subjects ke marks
};

int main() {
    struct Student s[50];   // 50 students ka record
for(int i=0; i<=50;i++){
    // Example: first student input
    printf("Enter name: ");
    scanf("%s", s[0].name);

    printf("Enter roll no: ");
    scanf("%d", &s[0].roll_no);

    printf("Enter marks of 2 subjects: ");
    scanf("%d %d", &s[0].marks[0], &s[0].marks[1]);

    // Output
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s[0].name);
    printf("Roll No: %d\n", s[0].roll_no);
    printf("Marks: %d %d\n", s[0].marks[0], s[0].marks[1]);
}
    return 0;
}
