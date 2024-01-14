#include <stdio.h>

struct stu
{
    char name[20];
    int rollnumber;
    float marks[6];
};

int main()
{
    int n; // Number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct stu students[n]; // Array of structures to store information for n students

    for (int i = 0; i < n; i++)
    {
        float total = 0, percentage = 0;

        printf("\nEnter the details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollnumber);
        printf("Enter marks for all subjects:\n");
        printf("Data Structure: ");
        scanf("%f", &students[i].marks[0]);
        printf("Object Oriented Programming: ");
        scanf("%f", &students[i].marks[1]);
        printf("Mathematics 3: ");
        scanf("%f", &students[i].marks[2]);
        printf("Discrete Mathematics: ");
        scanf("%f", &students[i].marks[3]);
        printf("Digital System Design: ");
        scanf("%f", &students[i].marks[4]);
        printf("Indian Constitution: ");
        scanf("%f", &students[i].marks[5]);

        printf("\nReport Card for student %d:\n", i + 1);
        printf("Data Structure: %f\n", students[i].marks[0]);
        printf("Object Oriented Programming: %f\n", students[i].marks[1]);
        printf("Mathematics 3: %f\n", students[i].marks[2]);
        printf("Discrete Mathematics: %f\n", students[i].marks[3]);
        printf("Digital System Design: %f\n", students[i].marks[4]);
        printf("Indian Constitution: %f\n", students[i].marks[5]);

        total = total + students[i].marks[0] + students[i].marks[1] + students[i].marks[2] + students[i].marks[3] + students[i].marks[4] + students[i].marks[5];

        percentage = (total / 600) * 100;
        printf("Total Marks: %f\n", total);
        printf("Percentage: %f\n", percentage);
    }

    return 0;
}
