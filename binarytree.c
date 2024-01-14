#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    int rollno;
    char name[25];
    float percentage;
};
void func(struct student details);
int main()
{
    struct student details;
    details->rollno=1;
    details->name="Anushka";
    details->percentage=89.72;
    func(details);
    return 0;
}
void func(struct student details)
{
    printf("Name:%c\n",details->name);
    printf("Roll No.:%d\n",details->name);
    printf("Percentage:%f\n",details->percentage);
}