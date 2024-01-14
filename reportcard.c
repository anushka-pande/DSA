#include<stdio.h>
struct stu
{
    char name[20];
    int rollnumber;
    float marks[6];
};

int main()
{
    struct stu stu;
    float total=0,percentage=0;
      
        printf("Enter the details of student\n");
        printf("Name:");
        scanf("%s",&stu.name);
        printf("Roll Number:");
        scanf("%d",&stu.rollnumber);
        printf("Enter marks for all subject:\n");
        printf("Data Structure:");
        scanf("%f",&stu.marks[0]);
        printf("Object Oriented Programming:");
        scanf("%f",&stu.marks[1]);
        printf("Mathematics 3:");
        scanf("%f",&stu.marks[2]);
        printf("Discrete Mathematics:");
        scanf("%f",&stu.marks[3]);
        printf("Digital System Design:");
        scanf("%f",&stu.marks[4]);
        printf("Indian Constitution:");
        scanf("%f",&stu.marks[5]);

        printf("Report Card:\n");

        printf("Data Structure: %f \n",stu.marks[0]);
        printf("Object Oriented Programming: %f \n",stu.marks[1]);
        printf("Mathematics 3: %f \n",stu.marks[2]);
        printf("Discrete Mathematics: %f \n",stu.marks[3]);
        printf("Digital System Design: %f \n",stu.marks[4]);
        printf("Indian Constitution: %f\n",stu.marks[5]);
        
        total=total+stu.marks[0]+stu.marks[1]+stu.marks[2]+stu.marks[3]+stu.marks[4]+stu.marks[5];
        
        percentage=(total/600)*100;
        printf("Total Marks : %f\n",total);
        printf("Percentage : %f\n",percentage);

        return 0;
}      